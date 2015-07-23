﻿using System;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using CommandLine;
using Common.Logging;
using Experimot.Core.Util;
using Indriya.Core.Msgs;
using Microsoft.Kinect.VisualGestureBuilder;
using NetMQ;
using ProtoBuf;

namespace Experimot.Kinect.Perception
{
    /// <summary>
    /// Interaction logic for App.xaml
    /// </summary>
    public partial class App : Application
    {
        private static readonly ILog Log = LogManager.GetLogger<App>();
        public static CommandLineOptions Options;
        public static Node NodeInfo;
        public App()
        {
            Startup += AppStartup;
        }

        private void AppStartup(object sender, StartupEventArgs e)
        {
            NodeInfo = null;
            try
            {
                var args = e.Args;
                //if (args.Length > 0)
                {
                    Options = new CommandLineOptions();
                    Parser.Default.ParseArguments(args, Options);
                    NodeInfo = GetNodeInfo(Options.Name, Options.ParameterServer);

                    if (NodeInfo != null)
                    {
                        SendMotionRecognitionModuleInfo(NodeInfo, Options.ParameterServer);
                    }
                }
            }
            catch (Exception ex)
            {
                Log.Info("Retrieving the parameter from server failed");
            }
            if (NodeInfo == null)
            {
                MessageBox.Show("Info null");
                MainWindow = new MainWindow();
            }
            else
            {
                MainWindow = new MainWindow(NodeInfo);
            }
            MainWindow.Show();
        }

        private static Node GetNodeInfo(string name, string server, int timeout = 1000)
        {
            try
            {
                using (var context = NetMQContext.Create())
                {
                    using (var socket = context.CreateRequestSocket())
                    {
                        socket.Connect(server);
                        socket.Send(name);

                        var msg = socket.ReceiveMessage(new TimeSpan(0, 0, 0, 0, timeout));
                        if (msg != null)
                        {
                            if (msg.FrameCount > 0)
                            {
                                //    var nodeInfo = Serializer.Deserialize<Node>(msg.First.Buffer);
                                //    MessageBox.Show(string.Format("Received node info!"));
                                //    return nodeInfo;
                                //}

                                using (var memStream = new MemoryStream(msg.First.Buffer))
                                {
                                    var nodeInfo = Serializer.Deserialize<Node>(memStream);
                                    return nodeInfo;
                                }
                            }
                        }
                        else
                        {
                            Console.WriteLine("Message buffer empty!");
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(string.Format("{1} : {0}", ex.StackTrace, ex.Message));
                //MessageBox.Show(ex.StackTrace,"Parameter retrieve");
            }
            return null;
        }

        private static Node GetNodeInfo2(string name, string server, int timeout = 1000)
        {
            Node nodeInfo = null;
            try
            {
                using (var context = NetMQContext.Create())
                {
                    using (var socket = context.CreateRequestSocket())
                    using (var poller = new Poller())
                    {
                        socket.Connect(server);

                        socket.ReceiveReady += (s, a) =>
                        {
                            var msg = a.Socket.ReceiveMessage();
                            if (msg != null)
                            {
                                if (msg.FrameCount > 0)
                                {
                                    using (var memStream = new MemoryStream(msg.First.Buffer))
                                    {
                                        nodeInfo = Serializer.Deserialize<Node>(memStream);
                                    }
                                }
                            }
                            if (poller != null)
                            {
                                poller.RemoveSocket(a.Socket);
                            }
                        };
                        //poller.PollTimeout = (int) timeout/1000;
                        poller.AddSocket(socket);
                        socket.Send(name);
                        Task task = Task.Factory.StartNew(poller.Start);
                        Thread.Sleep(timeout);
                        poller.RemoveSocket(socket);
                        poller.Stop();
                        task.Wait();
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(string.Format("{1} : {0}", ex.StackTrace, ex.Message));
                //MessageBox.Show(ex.StackTrace,"Parameter retrieve");
            }
            return nodeInfo;
        }

        public static string GetFileString(string fileName, string server, int timeout = 1000)
        {
            try
            {
                using (var context = NetMQContext.Create())
                {
                    using (var socket = context.CreateRequestSocket())
                    {
                        socket.Connect(server);
                        socket.SendMore("file_request");
                        socket.Send(fileName);
                        var msg = socket.ReceiveString(new TimeSpan(0, 0, 0, 0, timeout));
                        if (msg != null)
                        {
                            Log.InfoFormat("File request response: {0}", msg);
                            return msg;
                        }
                        else
                        {
                            Log.Info("Message buffer empty!");
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Log.InfoFormat("{1} : {0}", ex.StackTrace, ex.Message);
            }
            return string.Empty;
        }

        private static void SendMotionRecognitionModuleInfo(Node node, string server, int timeout = 1000)
        {
            try
            {
                if (node == null)
                {
                    return;
                }

                const string defaultValue = @"Database\experimot.gbd";
                var dbList = ParameterUtil.GetCsvList(node.param, "database", defaultValue);
                if (dbList.Count == 0)
                {
                    dbList.Add(defaultValue);
                }
                var module = new GestureRecognitionModule {name = node.name};
                foreach (var db in dbList)
                {
                    using (var database = new VisualGestureBuilderDatabase(db))
                    {
                        foreach (var gesture in database.AvailableGestures)
                        {
                            var desc = new GestureDescription
                            {
                                name = gesture.Name,
                                type = (GestureDescription.GestureType) gesture.GestureType
                            };

                            module.motions.Add(desc);
                        }
                    }
                }

                using (var context = NetMQContext.Create())
                {
                    using (var socket = context.CreateRequestSocket())
                    {
                        socket.Connect(server);
                        socket.SendMore("register_motions");
                        socket.SendMore(node.name);
                        using (var ms = new MemoryStream())
                        {
                            Serializer.Serialize(ms, module);
                            socket.Send(ms.GetBuffer(), (int)ms.Length);
                        }
                        
                        //var msg = socket.ReceiveString(new TimeSpan(0, 0, 0, 0, timeout));
                        var msg = socket.ReceiveString();
                        if (msg != null)
                        {
                            Log.InfoFormat("Motion registration response: {0}", msg);
                        }
                        else
                        {
                            Log.Info("Message buffer empty!");
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Log.InfoFormat("{1} : {0}", ex.StackTrace, ex.Message);
            }
        }
    }
}
