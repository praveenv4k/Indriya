﻿using System.Linq;
using System;
using System.Collections.Generic;
using System.Reflection;
using experimot.msgs;
using Experimot.Core;
using Newtonsoft.Json.Linq;

#if USE_KINECT_BODIES
#else
using KinectEx;
#endif

// ReSharper disable LoopCanBeConvertedToQuery

namespace Experimot.Kinect.Perception
{
    public class MethodArg
    {
        private MethodInfo _methodInfo;
        private List<object> _args;

        private MethodArg()
        {
            _args = new List<object>();
        }

        public static MethodArg Create(string methodName, string argValues)
        {
            MethodArg ret = null;
#if USE_KINECT_BODIES
            
#else
            var method = typeof (BodyExtensions).GetMethod(methodName);
            if (method != null)
            {
                var parameters = method.GetParameters();
                var vals = argValues.Split(',');
                List<object> arguments = new List<object>();
                int i = 0;
                foreach (var parameterInfo in parameters)
                {
                    arguments.Add(Convert.ChangeType(vals[i++], parameterInfo.ParameterType));
                }
                ret = new MethodArg();
                ret._methodInfo = method;
                ret._args = arguments;
            }
#endif
            return ret;
        }

        public double Invoke(object obj, double defaultValue)
        {
            if (_methodInfo != null)
            {
                double ret;
                if (double.TryParse(_methodInfo.Invoke(obj, _args.ToArray()).ToString(), out ret))
                {
                    return ret;
                }
            }
            return defaultValue;
        }
    }

    public class NaoJoint
    {
        private string _sid;
        private string _name;
        private double _min;
        private double _max;
        private double _zero;
        private double _mid;
        private MethodArg _methodArg;

        public MethodArg KinectMapMethod
        {
            get { return _methodArg; }
            set { _methodArg = value; }
        }

        public static NaoJoint FromJsonTokens(JToken jointObj, JToken mapObject)
        {
            NaoJoint ret = null;
            if (jointObj != null)
            {
                ret = new NaoJoint
                {
                    _sid = jointObj.Value<string>("sid"),
                    _name = jointObj.Value<string>("name"),
                    _min = jointObj.SelectToken("$.limits").Value<double>("min"),
                    _max = jointObj.SelectToken("$.limits").Value<double>("max"),
                    _zero = jointObj.Value<double>("zeroPosition"),
                    _mid = jointObj.Value<double>("middlePosition")
                };
                if (mapObject != null)
                {
                    var kinect = mapObject.Value<string>("kinect");
                    if (!string.IsNullOrEmpty(kinect))
                    {
                        var kinObj = mapObject.SelectToken("$.kinect");
                        if (kinObj != null)
                        {
                            ret._methodArg = MethodArg.Create(jointObj.Value<string>("method"),
                                jointObj.Value<string>("arg"));
                        }
                    }
                }
            }
            return ret;
        }

        public double ScaleToNao(double humanMin, double humanMax, double humanValue)
        {
            var humanRange = humanMax - humanMin;
            var naoRange = _max - _min;
            if (humanValue > humanMax)
                humanValue = humanMax;
            else if (humanValue < humanMin)
                humanValue = humanMin;
            var diff = humanValue - humanMin;
            var newValue = _max - ((diff/humanRange)*naoRange);
            return newValue*Math.PI/180.0;
        }
    }

    /// <summary>
    /// Interaction logic for MainWindow
    /// </summary>
    public class NaoJointPublisher : MessagePublisher<ParamList>
    {
        private readonly List<NaoJoint> _joints; 
        /// <summary>
        /// Initializes a new instance of the MainWindow class.
        /// </summary>
        public NaoJointPublisher()
            : this("tcp://*", 5592, "NJP", string.Empty, string.Empty)
        {
        }

        /// <summary>
        /// Initializes a new instance of the MainWindow class.
        /// </summary>
        public NaoJointPublisher(string host, uint port, string topic, string naoJointsJson, string naoKinectJson) : base(host, port, topic)
        {
            _joints = new List<NaoJoint>();
            if (!string.IsNullOrEmpty(naoJointsJson) && !string.IsNullOrEmpty(naoKinectJson))
            {
                var naoObj = JArray.Parse(naoJointsJson);
                var kinectObj = JArray.Parse(naoKinectJson);

                foreach (var naoItem in naoObj)
                {
                    var kinectItem =
                        kinectObj.FirstOrDefault(s => s.Value<string>("sid") == naoItem.Value<string>("sid"));
                    _joints.Add(NaoJoint.FromJsonTokens(naoItem, kinectItem));
                }
            }
        }

        public List<NaoJoint> Joints
        {
            get { return _joints; }
        }

        /// <summary>
        /// Check if the instance of human is valid
        /// </summary>
        /// <param name="msg"></param>
        /// <returns></returns>
        protected override bool IsValid(ParamList msg)
        {
            return msg != null && msg.param.Count > 0;
        }
    }
}
