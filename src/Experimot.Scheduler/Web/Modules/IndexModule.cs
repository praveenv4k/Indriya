﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Common.Logging;
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
                    var dict = new Dictionary<int, int>()
                    {
                            {0,1},
                            {1,0},
                            {2,9},
                            {3,8},
                            {4,7},
                            {5,10},
                            {6,2},
                            {7,3},
                            {8,11},
                            {9,12},
                            {10,5},
                            {11,4},
                            {12,13},
                            {13,6},
                            {14,20},
                            {15,19},
                            {16,21},
                            {17,14},
                            {18,15},
                            {19,22},
                            {20,23},
                            {21,17},
                            {22,16},
                            {23,24},
                            {24,18},
                    };
                    var lines = System.IO.File.ReadAllLines(@"datalog.csv");
                    var csv = lines.Select(line => line.Split(',')).ToList(); // or, List<YourClass>
                    var jointList = new List<List<double>>();
                    for (int i = 0; i < csv.Count; i++)
                    {  
                        if(i == 0) continue;
                        //var list = new IndexVal() {id = i + 1};
                        var list = new List<double>();
                        for (int j = 4; j < 29; j++)
                        {
                            list.Add(double.Parse(csv[i][dict[j - 4]+4]));
                        }
                        jointList.Add(list);
                    }
                    string json = JsonConvert.SerializeObject(jointList);
                    //return StreamResponse(() => new MemoryStream(Encoding.UTF8.GetBytes(json ?? "")), "application/json");
                    var resp = new Response()
                    {
                        ContentType = "application/json",
                        Contents = s => {
                                    var bytes = Encoding.UTF8.GetBytes(json);
                                        s.Write(bytes, 0, bytes.Length);
                                }
                    };
                    ////application/json
                    return resp;
                }
                catch (Exception ex)
                {
                    Log.InfoFormat("Exception occured while GET jointvals : {0}", ex.Message);
                }
                return (Response)HttpStatusCode.OK;
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
