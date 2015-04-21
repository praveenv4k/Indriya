﻿using System;
using System.Diagnostics;
using System.Reflection;
using System.Threading.Tasks;
using Common.Logging;
using uhttpsharp;

namespace Experimot.Scheduler.Web.Handlers
{
    public class TimingHandler : IHttpRequestHandler
    {
        private static readonly ILog Logger = LogManager.GetLogger(MethodBase.GetCurrentMethod().DeclaringType);

        public async Task Handle(IHttpContext context, Func<Task> next)
        {
            var stopWatch = Stopwatch.StartNew();
            await next();
            
            Logger.InfoFormat("request {0} took {1}", context.Request.Uri, stopWatch.Elapsed);

        }
    }
}