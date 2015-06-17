#r "System.Runtime.dll"
#load "IBehaviorExecutionContext.csx"
#load "IExecuteOnceBehavior.csx"
#load "BehaviorInfo.csx"
#load "SimpleBehaviorTask.csx"
#load "MotionBehaviorTask.csx"
#load "MainProgramUtil.csx"
#load "MainProgram.csx"
#load "BehaviorExecutionTask.csx"
#load "BehaviorExecutionContext.csx"
#load "GeneratedProgram.csx"
#load "BehaviorExecutionEngine.csx"


using System;
using NetMQ;
using Common.Logging;
using ProtoBuf;
using System.Collections.Generic;
using System.Collections.Specialized;
using Quartz;
using Quartz.Impl;
using Quartz.Impl.Matchers;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;
						
Common.Logging.LogManager.Adapter = new Common.Logging.Simple.ConsoleOutLoggerFactoryAdapter { Level = Common.Logging.LogLevel.Info };				

if(Env.ScriptArgs.Count <=0)
{
	Console.WriteLine("Need parameter server info!");
}
else
{
	try{
		var node_name = Env.ScriptArgs[0];
		var context_server = Env.ScriptArgs[1];
		var resp = MainProgramUtil.GetNodeInfo("node_"+node_name,context_server);
		Console.WriteLine(resp);

		var context = new BehaviorExecutionContext();
		context.ContextServer = context_server;

		var scheduler = MainProgramUtil.GetScheduler();
		scheduler.Start();

		var engine = new BehaviorExecutionEngine(context, scheduler);

		var tasks = new List<Task>
					{
						Task.Factory.StartNew(() => engine.Run())
					};

		Task.WaitAll(tasks.ToArray());

		scheduler.Shutdown();
	}
	catch(Exception ex){
		Console.WriteLine("Exception occured : {0}", ex.StackTrace);
	}
	Console.WriteLine("Program Terminating ... ");
	Console.WriteLine("Press any key to continue ...");
	Console.ReadKey();
}