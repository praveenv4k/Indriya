﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Common.Logging;
using Experimot.Core;
using Experimot.Core.Util;
using Nancy;
using Nancy.TinyIoc;
using Newtonsoft.Json;

namespace Experimot.Scheduler.Web.Modules
{
    public class TestModel
    {
        public String Name { get; set; }
        public int Id { get; set; }
    }

    class IndexVal
    {
        public IndexVal()
        {
            val = new List<double>(25);
        }
        public int id { get; set; }
        public List<double> val { get; set; }
    }

    public class IndexModule : NancyModule
    {
        private static readonly ILog Log = LogManager.GetLogger(typeof (IndexModule));
        private const string WebRoot = @"C:/Work/Develop/src/github/ExPeriMot/src/Experimot.Web/www";
        //private const string WebRoot = @"../../src/Experimot.Web/www/";
        public IndexModule()
        {
            //Get["/"] = parameters => Response.AsFile(@"Web/www/index.html");
            //Get["/"] = parameters => Response.AsFile(Path.Combine(WebRoot, "index.html"));
            Get["/"] = parameters => Response.AsFile("index.html");

            Get["/req"] = parameters => Response.AsJson(new TestModel {Name = "Hello", Id = 1000});

            Get["/models/{type}/(?<all>.*)"] = parameters =>
            {
                Console.WriteLine(Request.Path);
                //return Response.AsFile(System.IO.Path.Combine("Web/www" + Request.Path));
                return Response.AsFile(WebRoot + Request.Path);
                //return Response.AsFile(Request.Path);
            };

            Get["/context"] = parameters =>
            {
                try
                {
                    var context = TinyIoCContainer.Current.Resolve<Context>();
                    if (context != null)
                    {
                        return Response.AsJson(context);
                    }
                }
                catch (Exception ex)
                {
                    Log.InfoFormat("Exception occured while GET context : {0}", ex.Message);
                }
                return (Response) HttpStatusCode.OK;
            };

            Get["/robot"] = parameters =>
            {
                try
                {
                    var context = TinyIoCContainer.Current.Resolve<Context>();
                    if (context != null)
                    {
                        return Response.AsJson(context.Robot);
                    }
                }
                catch (Exception ex)
                {
                    Log.InfoFormat("Exception occured while GET context : {0}", ex.Message);
                }
                return (Response) HttpStatusCode.OK;
            };

            Get["/human/{id}"] = _ =>
            {
                try
                {
                    var context = TinyIoCContainer.Current.Resolve<Context>();
                    if (context != null)
                    {
                        int id = _.id;
                        if (id >= 0 && id < context.Humans.Count)
                        {
                            return Response.AsJson(context.Humans[id]);
                        }
                    }
                }
                catch (Exception ex)
                {
                    Log.InfoFormat("Exception :  {0} occured while processing request : {1}", ex.Message, Request.Url);
                }
                return (Response) HttpStatusCode.OK;
            };

            Get["/humans"] = parameters =>
            {
                try
                {
                    var context = TinyIoCContainer.Current.Resolve<Context>();
                    if (context != null)
                    {
                        return Response.AsJson(context.Humans);
                    }
                }
                catch (Exception ex)
                {
                    Log.InfoFormat("Exception occured while GET context : {0}", ex.Message);
                }
                return (Response)HttpStatusCode.OK;
            };

            Get["/jointvals"] = parameters =>
            {
                try
                {
                    var context = TinyIoCContainer.Current.Resolve<Context>();
                    if (context != null)
                    {
                        var array = new double[context.Robot.SensorData.JointValues.JointValues.Count];
                        int i = 0;
                        foreach (var jointValue in context.Robot.SensorData.JointValues.JointValues)
                        {
                            array[i++] = jointValue.value;
                        }
                        return Response.AsJson(array);
                    }
                }
                catch (Exception ex)
                {
                    Log.InfoFormat("Exception occured while GET jointvals : {0}", ex.Message);
                }
                return (Response) HttpStatusCode.OK;
            };

            Get["/testjointvals/{id}"] = parameters =>
            {
                try
                {
                    int id = parameters.id;
                    string json = Tests.TestJointValues.Instance.GetJointValues(id);
                    var resp = new Response()
                    {
                        ContentType = "application/json",
                        Contents = s =>
                        {
                            var bytes = Encoding.UTF8.GetBytes(json);
                            s.Write(bytes, 0, bytes.Length);
                        }
                    };
                    return resp;
                }
                catch (Exception ex)
                {
                    Log.InfoFormat("Exception occured while GET jointvals : {0}", ex.Message);
                }
                return (Response)HttpStatusCode.OK;
            };


            Post["/designer/program/start"] = parameters =>
            {
                Log.InfoFormat("POST  : {0}", Request.Url);
                if (Request.Body != null)
                {
                    using (var reader = new StreamReader(Request.Body))
                    {
                        string result = reader.ReadToEnd();
                        var bootStrapper = TinyIoCContainer.Current.Resolve<BootStrapper>();
                        if (bootStrapper!=null && !string.IsNullOrEmpty(result))
                        {
                            bootStrapper.RequestMainProgramGeneration(result);
                            bootStrapper.MainProgramExecutionRequest(ExecutionRequest.Start);
                            return (Response)HttpStatusCode.OK;
                        }
                        Log.InfoFormat("Body  : {0}", result);

                    }
                }
                else
                {
                    
                }
                return (Response)HttpStatusCode.NotModified;
            };

            Post["/designer/program/startxml"] = parameters =>
            {
                Log.InfoFormat("POST  : {0}", Request.Url);
                if (Request.Body != null)
                {
                    using (var reader = new StreamReader(Request.Body))
                    {
                        string result = reader.ReadToEnd();
                        var config = TinyIoCContainer.Current.Resolve<experimot_config>();
                        var outputPath = ParameterUtil.Get(config.parameters, "MainProgramFolder", "");
                        if (!string.IsNullOrEmpty(outputPath))
                        {
                            File.WriteAllText(
                                Path.Combine(Environment.ExpandEnvironmentVariables(outputPath), "behavior.xml"), result);

                            var bootStrapper = TinyIoCContainer.Current.Resolve<BootStrapper>();
                            if (bootStrapper != null && !string.IsNullOrEmpty(result))
                            {
                                //bootStrapper.RequestMainProgramGeneration(result);
                                bootStrapper.MainProgramExecutionRequest(ExecutionRequest.Start);
                                return (Response) HttpStatusCode.OK;
                            }
                        }
                        Log.InfoFormat("Body  : {0}", result);

                    }
                }
                else
                {

                }
                return (Response)HttpStatusCode.NotModified;
            };

            Post["/designer/program/stop"] = parameters =>
            {
                Log.InfoFormat("POST  : {0}", Request.Url);
                var bootStrapper = TinyIoCContainer.Current.Resolve<BootStrapper>();
                if (bootStrapper != null)
                {
                    bootStrapper.MainProgramExecutionRequest(ExecutionRequest.Stop);
                    return (Response)HttpStatusCode.OK;
                }
                return (Response)HttpStatusCode.NotModified;
            };

            Post["/designer/program/code"] = parameters =>
            {
                Log.InfoFormat("POST  : {0}", Request.Url);


                if (Request.Body != null)
                {
                    using (var reader = new StreamReader(Request.Body))
                    {
                        string result = reader.ReadToEnd();
                        Log.InfoFormat("Body  : {0}", result);
                    }
                }

                var formDict = Request.Form as Nancy.DynamicDictionary;
                if (formDict != null)
                {
                    foreach (var key in formDict.Keys)
                    {
                        Log.InfoFormat("Form - Key  : {0}; Value: {1}", key, formDict[key]);
                    }
                }

                var queryDict = Request.Query as Nancy.DynamicDictionary;
                if (queryDict != null)
                {
                    foreach (var key in queryDict.Keys)
                    {
                        Log.InfoFormat("Query - Key  : {0}; Value: {1}", key, queryDict[key]);
                    }
                }
                return (Response)HttpStatusCode.OK;
            };
        }
    }
}
