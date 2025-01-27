﻿using System;
using System.Windows;
using Common.Logging;
using Indriya.Core;
using Indriya.Core.Schema;
using Indriya.Core.Util;
using Nancy.Hosting.Self;

namespace Indriya.Application.Web
{
    internal class IndriyaWeb : IDisposable
    {
        private readonly AppConfig _config;
        private bool _disposed;
        private static readonly ILog Log = LogManager.GetLogger(typeof (IndriyaWeb));
        private NancyHost _host;

        public IndriyaWeb(AppConfig config)
        {
            _config = config;
        }

        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        public void Start()
        {
            try
            {
                if (_config != null && _config.parameters != null && _config.parameters.Count > 0 && _host == null)
                {
                    var enabled = ParameterUtil.Get(_config.parameters, "WebServerEnabled", false);
                    if (enabled)
                    {
                        var host = ParameterUtil.Get(_config.parameters, "WebServerHost", "http://localhost");
                        var port = ParameterUtil.Get(_config.parameters, "WebServerPort", 8888);

                        var uriStr = string.Format("{0}:{1}", host, port);

                        //string userName = System.Security.Principal.WindowsIdentity.GetCurrent().Name;

                        HostConfiguration config = new HostConfiguration()
                        {
                            UrlReservations = new UrlReservations() { CreateAutomatically = true}
                        };

                        //var config = new HostConfiguration();
                        //config.RewriteLocalhost = false;

                        _host = new NancyHost(new Uri(uriStr), new IndriyaWebBootStrapper(), config);

                        //_host = new NancyHost(new Uri(uriStr), new IndriyaWebBootStrapper());

                        _host.Start();

                        Log.InfoFormat("Indriya web interface started at {0}", uriStr);
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message + '\n' + ex.StackTrace, ex.Message);
            }
        }

        public void Stop()
        {
            if (_host != null)
            {
                _host.Stop();
                _host.Dispose();
                _host = null;
                Log.Info("Indriya web interface stopped");
            }
        }

        // Protected implementation of Dispose pattern. 
        protected virtual void Dispose(bool disposing)
        {
            if (_disposed)
                return;

            if (disposing)
            {
            }

            Stop();

            _disposed = true;
        }
    }
}
