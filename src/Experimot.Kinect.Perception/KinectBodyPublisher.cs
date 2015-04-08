﻿using System.Collections.Generic;
using System.IO;
using System.Text;
using experimot.msgs;
using Microsoft.Kinect;
using ProtoBuf;
using ZMQ;
using Joint = Microsoft.Kinect.Joint;

namespace Experimot.Kinect.Perception
{
    /// <summary>
    /// Interaction logic for MainWindow
    /// </summary>
    public class KinectBodyPublisher
    {
        private Context _ctx;
        private Socket _socket;
        private readonly uint _port;
        private readonly string _topic;
        private readonly UTF8Encoding _encoding;

        /// <summary>
        /// Initializes a new instance of the MainWindow class.
        /// </summary>
        public KinectBodyPublisher() : this("tcp://*", 5564, "KSP")
        {
        }

        /// <summary>
        /// Initializes a new instance of the MainWindow class.
        /// </summary>
        public KinectBodyPublisher(string host, uint port, string topic)
        {
            _host = host;
            _port = port;
            _topic = topic;
            _encoding = new UTF8Encoding();
        }

        private void InitZmq()
        {
            if (_ctx == null)
            {
                _ctx = new Context(1);
                _socket = _ctx.Socket(SocketType.PUB);
                var address = string.Format("{0}:{1}", _host, _port);
                _socket.Bind(address);
            }
        }

        private void TerminateZmq()
        {
            if (_socket != null)
            {
                _socket.Dispose();
                if (_ctx != null)
                {
                    _ctx.Dispose();
                    _ctx = null;
                }
            }
        }

        /// <summary>
        /// Execute start up tasks
        /// </summary>
        public void Initialize()
        {
            InitZmq();
        }

        /// <summary>
        /// Execute shutdown tasks
        /// </summary>
        public void Terminate()
        {
            TerminateZmq();
        }

        /// <summary>
        /// Handles the body frame data arriving from the sensor
        /// </summary>
        /// <param name="bodies"></param>
        public void UpdateBodyFrame(Body[] bodies)
        {
            {
                KinectBodies kbodies = new KinectBodies();
                int penIndex = 0;
                foreach (var body in bodies)
                {
                    penIndex++;
                    if (body.IsTracked)
                    {
                        var kbody = new KinectBody
                        {
                            IsTracked = true,
                            TrackingId = penIndex - 1,
                            JointCount = body.Joints.Count
                        };

                        IReadOnlyDictionary<JointType, Joint> joints = body.Joints;

                        foreach (JointType jointType in joints.Keys)
                        {
                            // sometimes the depth(Z) of an inferred joint may show as negative
                            // clamp down to 0.1f to prevent coordinatemapper from returning (-Infinity, -Infinity)
                            CameraSpacePoint position = joints[jointType].Position;
                            if (position.Z < 0)
                            {
                                position.Z = KinectBodyHelper.InferredZPositionClamp;
                            }

                            KinectJoint kjoint = new KinectJoint
                            {
                                Type = (KinectJoint.JointType) jointType,
                                State = (KinectJoint.TrackingState) joints[jointType].TrackingState,
                                Position = new Vector3d {x = position.X, y = position.Y, z = position.Z}
                            };
                            var orient = body.JointOrientations[jointType].Orientation;
                            kjoint.Orientation = new Quaternion
                            {
                                w = orient.W,
                                x = orient.X,
                                y = orient.Y,
                                z = orient.Z
                            };
                            kbody.Joints.Add(kjoint);
                        }
                        kbodies.Body.Add(kbody);
                    }
                }
                PublishKinectBodies(kbodies);
            }
        }

        private const int SendFrequency = 10;
        private int _sendCount;
        private readonly string _host;

        private void PublishKinectBodies(KinectBodies kbodies)
        {
            if (_sendCount < SendFrequency)
            {
                _sendCount++;
            }
            else
            {
                _sendCount = 0;
                if (kbodies != null && kbodies.Body.Count > 0 && _socket != null)
                {
                    _socket.SendMore(_topic, _encoding);
                    using (var ms = new MemoryStream())
                    {
                        Serializer.Serialize(ms, kbodies);
                        _socket.Send(ms.GetBuffer());
                    }
                }
            }
        }
    }
}
