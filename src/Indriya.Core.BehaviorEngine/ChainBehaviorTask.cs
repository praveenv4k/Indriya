using System;
using Common.Logging;
using NetMQ;

namespace Indriya.Core.BehaviorEngine
{
    public class ChainBehaviorTask : Quartz.IJob
    {
        private static readonly ILog Log = LogManager.GetLogger(typeof (ChainBehaviorTask));

        public void Execute(Quartz.IJobExecutionContext context)
        {
            if (context != null)
            {
                try
                {
                    var ip = context.MergedJobDataMap.GetString("BehaviorServerIp");
                    var port = context.MergedJobDataMap.GetIntValue("BehaviorServerPort");
                    var behaviorName = context.MergedJobDataMap.GetString("BehaviorName");
                    if (!string.IsNullOrEmpty(ip) && port != 0)
                    {
                        using (var ctx = NetMQ.NetMQContext.Create())
                        {
                            using (var sock = ctx.CreateRequestSocket())
                            {
                                var addr = string.Format("{0}:{1}", ip, port);
                                Log.InfoFormat("Connecting to behavior server: {0}", addr);
                                sock.Connect(addr);
                                Log.InfoFormat("Connected to behavior server: {0}", addr);
                                sock.Send(behaviorName);
                                Log.InfoFormat("Sent behavior execution request: {0}", behaviorName);
                                var reply = sock.ReceiveString();
                                Log.InfoFormat("Behavior execution response: {0}", reply);
                            }
                        }
                    }
                }
                catch (Exception ex)
                {
                    Log.ErrorFormat("Simple behavior error : {0}", ex.Message);
                }
            }
        }
    }
}