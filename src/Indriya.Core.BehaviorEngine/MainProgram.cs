using System;
using System.Collections.Generic;
using System.Linq;
using Common.Logging;
using NetMQ;
using Newtonsoft.Json.Linq;
using Quartz;
using Quartz.Impl.Matchers;

// ReSharper disable LoopCanBeConvertedToQuery


namespace Indriya.Core.BehaviorEngine
{
    public class MainProgram : IJobListener
    {
        private static volatile bool _requestStop;
        private readonly IDictionary<string, object> _props;
        private readonly IScheduler _scheduler;
        private const int RecvTimeout = 200;
        private const int Period = 200;
        private readonly object _object = new object();
        private List<MotionBasedBehavior> _motionBasedBehaviors;
        private string _contextServer;
        private const string HumanDetected = "HumanDetected";
        private static readonly ILog Log = LogManager.GetLogger(typeof(MainProgram));

        public MainProgram(IDictionary<string, object> props, IScheduler scheduler)
        {
            _props = props;
            _scheduler = scheduler;
            _requestStop = false;

            if (_scheduler != null)
            {
                scheduler.ListenerManager.AddJobListener(this, GroupMatcher<JobKey>.AnyGroup());
            }

            _props.Add("ExecutionCompleteList",new List<Guid>());
        }

        private static object GetValue(IDictionary<string, object> props, string key, object defaultValue)
        {
            var ret = defaultValue;
            if (props != null)
            {
                if (props.ContainsKey(key))
                {
                    ret = props[key];
                }
            }
            return ret;
        }

        private static Dictionary<string, List<BehaviorInfo>> CheckGestureTrigger(NetMQSocket socket, JArray humanArray,
            Dictionary<string, List<BehaviorInfo>> gestBehaviorMap)
        {
            var ret = new Dictionary<string, List<BehaviorInfo>>();
            if (humanArray != null && socket != null && humanArray.Count > 0)
            {
                bool humanDetectedServed = false;
                foreach (var human in humanArray)
                {
                    var gestures = human.SelectToken("$.Gestures");
                    foreach (var gesture in gestures)
                    {
                        string name = gesture.Value<string>("Name");
                        if (gestBehaviorMap.ContainsKey(name))
                        {
                            bool active = gesture.Value<bool>("Active");
                            int confidence = gesture.Value<int>("Confidence");
                            if (active && confidence > 95)
                            {
                                ret.Add(name, gestBehaviorMap[name]);
                                Console.WriteLine(@"Name : {0}, Confidence: {1}", name, confidence);
                            }
                        }
                        if (!humanDetectedServed)
                        {
                            humanDetectedServed = true;
                            // Human Detected Gesture
                            if (gestBehaviorMap.ContainsKey(HumanDetected))
                            {
                                if (!ret.ContainsKey(HumanDetected))
                                {
                                    ret.Add(name, gestBehaviorMap[name]);
                                    Console.WriteLine(@"Name : {0}", name);
                                }
                            }
                        }

                    }
                }
            }
            return ret;
        }

        private static List<MotionBasedBehavior> CheckGestureTrigger(NetMQSocket socket, JArray humanArray,
            List<MotionBasedBehavior> gestBehaviorMap)
        {
            var ret = new List<MotionBasedBehavior>();
            if (humanArray != null && socket != null && humanArray.Count > 0)
            {
                bool humanDetectedServed = false;
                foreach (var human in humanArray)
                {
                    var gestures = human.SelectToken("$.Gestures");
                    foreach (var gesture in gestures)
                    {
                        string name = gesture.Value<string>("Name");
                        var motionBehavior = gestBehaviorMap.FirstOrDefault(s => s.Trigger == name);
                        if (motionBehavior != null)
                        {
                            bool active = gesture.Value<bool>("Active");
                            int confidence = gesture.Value<int>("Confidence");
                            if (active && confidence > motionBehavior.ConfidenceLevel)
                            {
                                motionBehavior.Id = human.Value<int>("Id");
                                ret.Add(motionBehavior);
                                Console.WriteLine(@"Name : {0}, Confidence: {1}", name, confidence);
                            }
                        }
                        if (!humanDetectedServed)
                        {
                            humanDetectedServed = true;
                            // Human Detected Gesture
                            var behavior = gestBehaviorMap.FirstOrDefault(s => s.Trigger == HumanDetected);
                            if (behavior != null)
                            {
                                behavior.Id = human.Value<int>("Id");
                                ret.Add(behavior);
                                Console.WriteLine(@"Name : {0}", HumanDetected);
                            }
                        }
                    }
                }
            }
            return ret;
        }

        private static IList<BehaviorInfo> GetBehaviorModules2(NetMQSocket socket,
            IList<BehaviorInfo> behaviorList)
        {
            var ret = new List<BehaviorInfo>();
            var dict = new Dictionary<string, BehaviorInfo>();
            //behavior_modules
            if (socket != null && behaviorList != null && behaviorList.Count > 0)
            {
                socket.Send("behavior_modules");
                var resp = socket.ReceiveString(new TimeSpan(0, 0, 0, 0, RecvTimeout));
                if (!string.IsNullOrEmpty(resp))
                {
                    var modules = JArray.Parse(resp);
                    if (modules != null && modules.Count > 0)
                    {
                        //Console.WriteLine(resp);
                        foreach (var module in modules)
                        {
                            var moduleName = module.Value<string>("name");
                            var responder = module.SelectToken("$.responder");
                            string host = string.Empty;
                            int port = 0;
                            if (responder != null)
                            {
                                host = responder.Value<string>("Host");
                                port = responder.Value<int>("Port");
                            }
                            var behaviors = module.SelectToken("$.behaviors");
                            foreach (var behavior in behaviors)
                            {
                                string name = behavior.Value<string>("name");
                                string functionName = behavior.Value<string>("function_name");
                                var parameters = new Dictionary<string, object>();
                                var args = behavior.SelectToken("$.arg");
                                foreach (var arg in args)
                                {
                                    parameters.Add(arg.Value<string>("name"), new Dictionary<string, object>
                                    {
                                        {"value", arg.Value<string>("value")},
                                        {"place_holder", arg.Value<string>("place_holder")},
                                        {"type", arg.Value<string>("type")}
                                    });
                                }
                                if (!dict.ContainsKey(name))
                                {
                                    dict.Add(name, new BehaviorInfo
                                    {
                                        BehaviorName = name,
                                        FunctionName = functionName,
                                        Ip = host,
                                        Port = port,
                                        Parameters = parameters
                                    });
                                }
                            }
                        }
                    }
                }
                if (dict.Count > 0)
                {

                    // ReSharper disable once LoopCanBeConvertedToQuery
                    foreach (var item in behaviorList)
                    {
                        Log.InfoFormat("Before : {0}",item.ToString());
                        if (dict.ContainsKey(item.BehaviorName))
                        {
                            var temp = dict[item.BehaviorName].Clone() as BehaviorInfo;
                            if (temp != null)
                            {
                                foreach (var parameter in item.Parameters)
                                {
                                    if (!temp.Parameters.ContainsKey(parameter.Key))
                                    {
                                        temp.Parameters.Add(parameter);
                                    }
                                    else
                                    {
                                        temp.Parameters[parameter.Key] = parameter.Value;
                                    }
                                }
                                Log.InfoFormat("After : {0}", temp.ToString());
                                ret.Add(temp);
                            }

                            //ret.Add(dict[item.BehaviorName]);
                            // Update the values of the parameter list with the once originally parsed from the xml file
                            //foreach (var parameter in item.Parameters)
                            //{
                            //    if (!dict[item.BehaviorName].Parameters.ContainsKey(parameter.Key))
                            //    {
                            //        dict[item.BehaviorName].Parameters.Add(parameter);
                            //    }
                            //    else
                            //    {
                            //        dict[item.BehaviorName].Parameters[parameter.Key] = parameter.Value;
                            //    }
                            //}
                            //ret.Add(dict[item.BehaviorName]);
                        }
                    }
                }
            }
            return ret;
        }


        private static IList<BehaviorInfo> GetBehaviorModules(NetMQSocket socket,
            IList<BehaviorInfo> behaviorList)
        {
            var ret = new List<BehaviorInfo>();
            var dict = new Dictionary<string, BehaviorInfo>();
            //behavior_modules
            if (socket != null && behaviorList != null && behaviorList.Count > 0)
            {
                ret.AddRange(behaviorList);
                socket.Send("behavior_modules");
                var resp = socket.ReceiveString(new TimeSpan(0, 0, 0, 0, RecvTimeout));
                if (!string.IsNullOrEmpty(resp))
                {
                    var modules = JArray.Parse(resp);
                    if (modules != null && modules.Count > 0)
                    {
                        //Console.WriteLine(resp);
                        foreach (var module in modules)
                        {
                            var moduleName = module.Value<string>("name");
                            var responder = module.SelectToken("$.responder");
                            string host = string.Empty;
                            int port = 0;
                            if (responder != null)
                            {
                                host = responder.Value<string>("Host");
                                port = responder.Value<int>("Port");
                            }
                            var behaviors = module.SelectToken("$.behaviors");
                            foreach (var behavior in behaviors)
                            {
                                string name = behavior.Value<string>("name");
                                string functionName = behavior.Value<string>("function_name");
                                var args = behavior.SelectToken("$.arg");
                                var parameters = new Dictionary<string, object>();
                                foreach (var arg in args)
                                {
                                    parameters.Add(arg.Value<string>("name"), new Dictionary<string, object>
                                    {
                                        {"value", arg.Value<string>("value")},
                                        {"place_holder", arg.Value<string>("place_holder")},
                                        {"type", arg.Value<string>("type")}
                                    });
                                }
                                var matchingBehaviors = ret.Where(s => s.BehaviorName == name).ToList();
                                foreach (var matchingBehavior in matchingBehaviors)
                                {
                                    matchingBehavior.ModuleName = moduleName;
                                    matchingBehavior.FunctionName = functionName;
                                    matchingBehavior.Ip = host;
                                    matchingBehavior.Port = port;
                                    foreach (var parameter in parameters)
                                    {
                                        if (!matchingBehavior.Parameters.ContainsKey(parameter.Key))
                                        {
                                            matchingBehavior.Parameters.Add(parameter);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return ret;
        }

        private static void ScheduleBehaviorExecution(IScheduler scheduler, IList<BehaviorInfo> behaviorInfo,
            string triggerName)
        {
            Console.WriteLine(@"Behavior Execution for trigger : {0}", triggerName);
            if (behaviorInfo != null && behaviorInfo.Count > 0 && scheduler != null)
            {
                var moduleName = behaviorInfo[0].ModuleName;
                var jobKey = JobKey.Create(string.Format("Task_{0}", moduleName), moduleName);
                if (!scheduler.CheckExists(jobKey))
                {
                    IJobDetail detail = JobBuilder.Create<SimpleBehaviorTask>()
                        .WithIdentity(jobKey)
                        .Build();
                    detail.JobDataMap.Add("BehaviorInfoList", behaviorInfo);
                    ITrigger trigger = TriggerBuilder.Create().ForJob(detail).StartNow().Build();
                    scheduler.ScheduleJob(detail, trigger);
                    Console.WriteLine(@"New job about to be scheduled Job : {0}, Module : {1}", jobKey.Name,
                        jobKey.Group);
                }
            }
        }

        private static bool ScheduleBehaviorExecution(IScheduler scheduler, MotionBasedBehavior behavior,
            string triggerName, IDictionary<string, object> props)
        {
            bool ret = false;
            Console.WriteLine(@"Behavior Execution for trigger : {0}", triggerName);
            if (behavior != null && behavior.RobotActions.Count > 0 && scheduler != null)
            {
                var moduleName = behavior.RobotActions[0].ModuleName;
                var jobKey = JobKey.Create(string.Format("Task_{0}", moduleName), moduleName);
                if (!scheduler.CheckExists(jobKey))
                {
                    IJobDetail detail = JobBuilder.Create<MotionBehaviorTask>()
                        .WithIdentity(jobKey)
                        .Build();
                    detail.JobDataMap.Add("MotionBasedBehavior", behavior);
                    var contextServer = GetValue(props, "ContextServer", "tcp://localhost:5800").ToString();
                    if (!string.IsNullOrEmpty(contextServer))
                    {
                        detail.JobDataMap.Add("ContextServer", contextServer);
                    }
                    ITrigger trigger = TriggerBuilder.Create().ForJob(detail).StartNow().Build();
                    scheduler.ScheduleJob(detail, trigger);
                    Console.WriteLine(@"New job about to be scheduled Job : {0}, Module : {1}", jobKey.Name,
                        jobKey.Group);
                    ret = true;
                }
            }
            return ret;
        }

        private static void ScheduleBehaviorExecution(IScheduler scheduler, JToken behaviorModule, string behaviorName)
        {
            Console.WriteLine(@"Behavior Execution request : {0}", behaviorName);
            if (behaviorModule != null)
            {
                var moduleName = behaviorModule.Value<string>("name");
                if (!string.IsNullOrEmpty(moduleName))
                {
                    var jobKey = JobKey.Create(string.Format("Task_{0}", behaviorName), moduleName);
                    if (scheduler != null && !scheduler.CheckExists(jobKey))
                    {
                        var responder = behaviorModule.SelectToken("$.responder");
                        if (responder != null)
                        {
                            string host = responder.Value<string>("Host");
                            int port = responder.Value<int>("Port");
                            // Console.WriteLine(@"Host : {0}, Port : {1}", host, port);

                            IJobDetail detail = JobBuilder.Create<SimpleBehaviorTask>()
                                .WithIdentity(jobKey)
                                .Build();

                            IList<BehaviorInfo> info = new List<BehaviorInfo>();
                            info.Add(new BehaviorInfo()
                            {
                                BehaviorName = behaviorName,
                                Ip = host,
                                Port = port,
                                ModuleName = moduleName
                            });
                            detail.JobDataMap.Add("BehaviorInfoList", info);
                            detail.JobDataMap.Add("BehaviorServerIp", host);
                            detail.JobDataMap.Add("BehaviorServerPort", port);
                            detail.JobDataMap.Add("BehaviorName", behaviorName);

                            ITrigger trigger = TriggerBuilder.Create().ForJob(detail).StartNow().Build();
                            scheduler.ScheduleJob(detail, trigger);
                            Console.WriteLine(@"New job about to be scheduled Job : {0}, Module : {1}", jobKey.Name,
                                jobKey.Group);
                        }
                    }
                }
            }
        }

        public void Run()
        {
            Console.WriteLine(@"About to start running main program");
            try
            {
                if (_props != null && _props.Count > 0)
                {
                    var contextServer = GetValue(_props, "ContextServer", "tcp://localhost:5800").ToString();
                    if (!string.IsNullOrEmpty(contextServer))
                    {
                        var triggerBehaviorMap = GetValue(_props, "TriggerBehaviorMap",
                            new Dictionary<string, List<BehaviorInfo>>());
                        var dict = triggerBehaviorMap as Dictionary<string, List<BehaviorInfo>>;
                        if (dict != null && dict.Count > 0)
                        {
                            foreach (var item in dict)
                            {
                                Console.WriteLine(@"Gesture: {0} -> ", item.Key);
                                foreach (var value in item.Value)
                                {
                                    Console.WriteLine(@"Action: {0} -> ", value.BehaviorName);
                                }
                            }

                            using (var ctx = NetMQContext.Create())
                            {
                                using (var socket = ctx.CreateRequestSocket())
                                {
                                    socket.Connect(contextServer);
                                    while (!_requestStop)
                                    {
                                        socket.Send("human");
                                        var resp = socket.ReceiveString(new TimeSpan(0, 0, 0, 0, RecvTimeout));
                                        if (!string.IsNullOrEmpty(resp))
                                        {
                                            try
                                            {
                                                JArray obj = JArray.Parse(resp);
                                                //Console.WriteLine(resp);
                                                var behaviorMap = CheckGestureTrigger(socket, obj, dict);
                                                if (behaviorMap.Count == 0)
                                                {
                                                    //Console.WriteLine(@"No gesture detected!");
                                                }
                                                foreach (var behavior in behaviorMap)
                                                {
                                                    Console.WriteLine(@"Detected Gesture: {0} -> ", behavior.Key);
                                                    foreach (var value in behavior.Value)
                                                    {
                                                        Console.WriteLine(@"Action: {0} -> ", value.BehaviorName);
                                                    }
                                                }
                                                if (behaviorMap.Count > 0)
                                                {
                                                    foreach (var behavior in behaviorMap)
                                                    {
                                                        var modules = GetBehaviorModules(socket, behavior.Value);
                                                        if (modules != null && modules.Count > 0)
                                                        {
                                                            ScheduleBehaviorExecution(_scheduler, modules,
                                                                behavior.Key);
                                                        }
                                                    }
                                                    //var modules = GetBehaviorModules(socket, behaviorMap.Values);
                                                    //if (modules != null && modules.Count > 0)
                                                    //{
                                                    //    foreach (var module in modules)
                                                    //    {
                                                    //        ScheduleBehaviorExecution(_scheduler, module.Value,
                                                    //            module.Key);
                                                    //    }
                                                    //}
                                                }
                                            }
                                            catch (Exception ex)
                                            {
                                                Console.WriteLine(ex.Message);
                                            }
                                        }
                                        System.Threading.Thread.Sleep(Period);
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        Console.WriteLine(@"Configuration information not available! Program will end now!");
                    }
                }
                else
                {
                    Console.WriteLine(@"Configuration information missing!");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(@"Main Program Run exception: {0}", ex.StackTrace);
            }
            Console.WriteLine(@"About to complete main program");
        }

        public void RunBehaviors()
        {
            Console.WriteLine(@"About to start running main program");
            try
            {
                if (_props != null && _props.Count > 0)
                {
                    _contextServer = GetValue(_props, "ContextServer", "tcp://localhost:5800").ToString();
                    if (!string.IsNullOrEmpty(_contextServer))
                    {
                        var triggerBehaviorMap = GetValue(_props, "BehaviorList", new List<MotionBasedBehavior>());
                        _motionBasedBehaviors = triggerBehaviorMap as List<MotionBasedBehavior>;
                        if (_motionBasedBehaviors != null && _motionBasedBehaviors.Count > 0)
                        {
                            // Display the Behavior Information
                            DisplayBehaviorInfo();

                            // Execute the Startup Behavior
                            ExecuteOnetimeBehaviors(BehaviorType.Startup);

                            // Execute the Cyclic Behavior
                            ExecuteCycleBehaviors();

                            // Execute the Exit Behavior
                            ExecuteOnetimeBehaviors(BehaviorType.Exit);
                        }
                        else
                        {
                        
                        }
                    }
                    else
                    {
                        Console.WriteLine(@"Configuration information not available! Program will end now!");
                    }
                }
                else
                {
                    Console.WriteLine(@"Configuration information missing!");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(@"Main Program Run exception: {0}", ex.StackTrace);
            }
            Console.WriteLine(@"About to complete main program");
        }

        private void DisplayBehaviorInfo()
        {
            if (_motionBasedBehaviors != null && _motionBasedBehaviors.Count > 0)
            {
                // Display the Behavior program information
                foreach (var item in _motionBasedBehaviors)
                {
                    switch (item.BehaviorType)
                    {
                        case BehaviorType.Startup:
                        case BehaviorType.Exit:
                            Console.WriteLine(@"Behavior Type: {0} -> ", item.BehaviorType);
                            foreach (var value in item.RobotActions)
                            {
                                Console.WriteLine(@"Action: {0} -> ", value.BehaviorName);
                            }
                            break;
                        case BehaviorType.Behavior:
                            Console.WriteLine(@"Gesture: {0} count with {1}", item.Trigger, item.TriggerCountVariable);
                            Console.WriteLine(@"Startup Actions -> ");
                            foreach (var value in item.InitActions)
                            {
                                Console.WriteLine(@"    Action: {0}", value.BehaviorName);
                            }
                            Console.WriteLine(@"Cyclic Actions -> ");
                            foreach (var value in item.RobotActions)
                            {
                                Console.WriteLine(@"    Action: {0}", value.BehaviorName);
                            }
                            Console.WriteLine(@"Exit Actions -> ");
                            foreach (var value in item.ExitActions)
                            {
                                Console.WriteLine(@"    Action: {0}", value.BehaviorName);
                            }
                            break;
                        default:
                            throw new ArgumentOutOfRangeException();
                    }
                }
            }
        }

        private void ExecuteCycleBehaviors()
        {
            Log.Info("Cyclic Behavior Execution start.");
            using (var ctx = NetMQContext.Create())
            {
                using (var socket = ctx.CreateRequestSocket())
                {
                    socket.Connect(_contextServer);
                    while (!_requestStop)
                    {
                        socket.Send("humans");
                        var resp = socket.ReceiveString(new TimeSpan(0, 0, 0, 0, RecvTimeout));
                        if (!string.IsNullOrEmpty(resp))
                        {
                            try
                            {
                                JArray obj = JArray.Parse(resp);
                                lock (_object)
                                {
                                    var cyclicBehavior =
                                        _motionBasedBehaviors.Where(s => s.BehaviorType == BehaviorType.Behavior && !s.ExitActionsComplete).ToList();
                                    if (cyclicBehavior.Count == 0)
                                    {
                                        break;
                                    }
                                    var behaviorMap = CheckGestureTrigger(socket, obj, cyclicBehavior);
                                    if (behaviorMap.Count == 0)
                                    {
                                    
                                    }
                                    foreach (var behavior in behaviorMap)
                                    {
                                        Console.WriteLine(@"Detected Gesture: {0} -> ", behavior.Trigger);
                                        foreach (var value in behavior.RobotActions)
                                        {
                                            Console.WriteLine(@"Action: {0} -> ", value.BehaviorName);
                                        }
                                    }
                                    if (behaviorMap.Count > 0)
                                    {
                                        foreach (var behavior in behaviorMap)
                                        {
                                            var modules = GetBehaviorModules(socket, behavior.RobotActions);
                                            if (modules != null && modules.Count > 0)
                                            {
                                                var motionBasedBehavior =
                                                    behavior.Clone() as MotionBasedBehavior;
                                                if (motionBasedBehavior != null)
                                                {
                                                    motionBasedBehavior.RobotActions = modules;
                                                    bool ret = ScheduleBehaviorExecution(_scheduler, motionBasedBehavior,
                                                        behavior.Trigger, _props);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            catch (Exception ex)
                            {
                                Console.WriteLine(ex.Message);
                            }
                        }
                        System.Threading.Thread.Sleep(Period);
                    }
                }
            }
            Log.Info("Cyclic Behavior Execution finish.");
        }

        private void ExecuteOnetimeBehaviors(BehaviorType type)
        {
            if (type == BehaviorType.Behavior)
            {
                return;
            }
            MotionBasedBehavior motionBasedBehavior = null;
            if (_motionBasedBehaviors != null)
            {
                var onetimeBehaviors = _motionBasedBehaviors.FirstOrDefault(s => s.BehaviorType == type);
                if (onetimeBehaviors != null)
                {
                    if (!string.IsNullOrEmpty(_contextServer))
                    {
                        using (var ctx = NetMQContext.Create())
                        {
                            using (var socket = ctx.CreateRequestSocket())
                            {
                                socket.Connect(_contextServer);
                                Log.Info("************** Getbehavior Modules ****************");
                                var modules = GetBehaviorModules(socket, onetimeBehaviors.RobotActions);
                                if (modules != null && modules.Count > 0)
                                {
                                    motionBasedBehavior =
                                        onetimeBehaviors.Clone() as MotionBasedBehavior;
                                    if (motionBasedBehavior != null)
                                    {
                                        foreach (var behaviorInfo in modules)
                                        {
                                            Log.InfoFormat("Before Execution: {0}", behaviorInfo.ToString());
                                        }
                                        motionBasedBehavior.RobotActions = modules;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (motionBasedBehavior != null)
            {
                if (motionBasedBehavior.BehaviorType == BehaviorType.Startup)
                {
                    Log.Info("Begin Startup Actions!");
                    MotionBehaviorTask.SyncExecuteBehavior(_contextServer, motionBasedBehavior.RobotActions);
                    Log.Info("Finish Startup Actions!");
                }
                else if (motionBasedBehavior.BehaviorType == BehaviorType.Exit)
                {
                    Log.Info("Begin Exit Actions!");
                    MotionBehaviorTask.SyncExecuteBehavior(_contextServer, motionBasedBehavior.RobotActions);
                    Log.Info("Finish Exit Actions!");
                }
            }
        }

        public void JobToBeExecuted(IJobExecutionContext context)
        {
            Console.WriteLine(@"Job to be executed : {0}", context.JobDetail.Key);
        }

        public void JobExecutionVetoed(IJobExecutionContext context)
        {
            Console.WriteLine(@"Job executed vetoed : {0}", context.JobDetail.Key);
        }

        public void JobWasExecuted(IJobExecutionContext context, JobExecutionException jobException)
        {
            Console.WriteLine(@"Job was executed : {0}", context.JobDetail.Key);
            var behavior = context.MergedJobDataMap.Get("MotionBasedBehavior") as MotionBasedBehavior;
            if (behavior != null)
            {
                lock (_object)
                {
                    var mBehavior = _motionBasedBehaviors.FirstOrDefault(s => s.Guid == behavior.Guid);
                    if (mBehavior != null)
                    {
                        mBehavior.InitActionsComplete = behavior.InitActionsComplete;
                        mBehavior.CyclicActionsComplete = behavior.CyclicActionsComplete;
                        mBehavior.ExitActionsComplete = behavior.ExitActionsComplete;
                    }
                }
            }
        }

        public string Name
        {
            get { return "MainProgram"; }
        }
    }
}