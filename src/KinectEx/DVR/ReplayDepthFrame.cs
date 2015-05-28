﻿using System;
using System.IO;
using System.Threading;
using System.Threading.Tasks;

#if NETFX_CORE
using Windows.Storage.Streams;
using Windows.UI.Xaml.Media.Imaging;
#else
using System.Windows;
using System.Windows.Media.Imaging;
#endif

#if NOSDK
using KinectEx.KinectSDK;
#elif NETFX_CORE
using WindowsPreview.Kinect;
#else
using Microsoft.Kinect;
#endif

namespace KinectEx.DVR
{
    /// <summary>
    /// A recordable / replayable version of a <c>DepthFrame</c>.
    /// </summary>
    public class ReplayDepthFrame : ReplayFrame
    {
        private static byte[] _staticBytes = null;
        private static ushort[] _staticData = null;

        private ushort[] _frameData = null;

        internal Stream Stream;
        internal long StreamPosition;

        /// <summary>
        /// The minimum reliable distance at which depth data can be interpreted
        /// (as reported by the Kinect sensor).
        /// </summary>
        public uint DepthMinReliableDistance { get; set; }

        /// <summary>
        /// The maximum reliable distance at which depth data can be interpreted
        /// (as reported by the Kinect sensor).
        /// </summary>
        public uint DepthMaxReliableDistance { get; set; }

        /// <summary>
        /// The width (in pixels) of the depth frame.
        /// </summary>
        public int Width { get; set; }

        /// <summary>
        /// The height (in pixels) of the depth frame.
        /// </summary>
        public int Height { get; set; }

        /// <summary>
        /// The number of bytes per pixel
        /// </summary>
        public uint BytesPerPixel { get; private set; }

        /// <summary>
        /// The raw depth data stored in this frame.
        /// </summary>
        public ushort[] FrameData
        {
            get
            {
                if (_frameData == null)
                {
                    // Assume we must read it from disk
                    return GetFrameDataAsync().Result;
                }
                return _frameData;
            }
        }
        
        // Multiple Constructor options

        /// <summary>
        /// Initializes a new instance of the <see cref="ReplayDepthFrame"/> class.
        /// </summary>
        internal ReplayDepthFrame() { }

#if !NOSDK
        /// <summary>
        /// Initializes a new instance of the <see cref="ReplayDepthFrame"/> class
        /// based on the specified <c>DepthFrame</c>.
        /// </summary>
        /// <param name="frame">The frame.</param>
        internal ReplayDepthFrame(DepthFrame frame)
        {
            this.FrameType = FrameTypes.Depth;
            this.RelativeTime = frame.RelativeTime;

            this.DepthMinReliableDistance = frame.DepthMinReliableDistance;
            this.DepthMaxReliableDistance = frame.DepthMaxReliableDistance;

            this.Width = frame.FrameDescription.Width;
            this.Height = frame.FrameDescription.Height;
            this.BytesPerPixel = frame.FrameDescription.BytesPerPixel;

            _frameData = new ushort[this.Width * this.Height];

            frame.CopyFrameDataToArray(_frameData);
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="ReplayDepthFrame"/> class
        /// based on the specified <c>DepthFrame</c> and array of <c>ushort</c>.
        /// </summary>
        /// <param name="frame">The frame.</param>
        /// <param name="frameData">The frame data.</param>
        internal ReplayDepthFrame(DepthFrame frame, ushort[] frameData)
        {
            this.FrameType = FrameTypes.Depth;
            this.RelativeTime = frame.RelativeTime;

            this.DepthMinReliableDistance = frame.DepthMinReliableDistance;
            this.DepthMaxReliableDistance = frame.DepthMaxReliableDistance;

            this.Width = frame.FrameDescription.Width;
            this.Height = frame.FrameDescription.Height;
            this.BytesPerPixel = frame.FrameDescription.BytesPerPixel;

            _frameData = frameData;
        }
#endif

        /// <summary>
        /// Initializes a new instance of the <see cref="ReplayDepthFrame"/> class
        /// by reading from the specified <c>BinaryReader</c>.
        /// </summary>
        /// <param name="reader">The reader.</param>
        /// <returns>The <c>ReplayDepthFrame</c></returns>
        /// <exception cref="System.IO.IOException">The recording appears to be corrupt.</exception>
        internal static ReplayDepthFrame FromReader(BinaryReader reader)
        {
            var frame = new ReplayDepthFrame();

            frame.FrameType = FrameTypes.Depth;
            frame.RelativeTime = TimeSpan.FromMilliseconds(reader.ReadDouble());
            frame.FrameSize = reader.ReadInt64();

            long frameStartPos = reader.BaseStream.Position;

            frame.DepthMinReliableDistance = reader.ReadUInt32();
            frame.DepthMaxReliableDistance = reader.ReadUInt32();

            frame.Width = reader.ReadInt32();
            frame.Height = reader.ReadInt32();
            frame.BytesPerPixel = reader.ReadUInt32();

            frame.Stream = reader.BaseStream;
            frame.StreamPosition = frame.Stream.Position;

            frame.Stream.Position += frame.Width * frame.Height * frame.BytesPerPixel;

            // Do Frame Integrity Check
            if (reader.ReadString() != ReplayFrame.EndOfFrameMarker)
            {
                System.Diagnostics.Debug.WriteLine("BAD FRAME...RESETTING");
                reader.BaseStream.Position = frameStartPos + frame.FrameSize;
                if (reader.ReadString() != ReplayFrame.EndOfFrameMarker)
                {
                    throw new IOException("The recording appears to be corrupt.");
                }
                return null;
            }

            return frame;
        }

        /// <summary>
        /// Used during replay to retrieve the raw depth data stored on 
        /// disk for this frame.
        /// </summary>
        public Task<ushort[]> GetFrameDataAsync()
        {
            return Task<ushort[]>.Run(() =>
            {
                Monitor.Enter(Stream);
                var reader = new BinaryReader(Stream);
                if (_staticBytes == null)
                    _staticBytes = new byte[this.Width * this.Height * 2];
                if (_staticData == null)
                    _staticData = new ushort[this.Width * this.Height];

                long savedPosition = Stream.Position;
                Stream.Position = StreamPosition;

                reader.Read(_staticBytes, 0, _staticBytes.Length);
                System.Buffer.BlockCopy(_staticBytes, 0, _staticData, 0, _staticBytes.Length);

                Stream.Position = savedPosition;

                Monitor.Exit(Stream);
                return _staticData;
            });
        }
    }
}
