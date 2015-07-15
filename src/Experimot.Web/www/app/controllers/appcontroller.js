﻿define(['app', 'backbone', 'marionette', 'models/robot', 'models/testjointvalues', 'models/JointValues', 'collections/drawables', 'collections/skeletons', 'marionette_threejs', 'poller',
    'views/programSelectModal',
    'views/saveDialog',
    'collections/programs', 'jsonview'],
    function (app, backbone, marionette, robot,testJointVals,jointVals, drawables,skeletons, m3Js,poller,openDialog,saveDialog,programs) {
        return backbone.Marionette.Controller.extend({
            initialize: function(options) {
                var _this = this;
                app.programs = new programs();
                app.Drawables = new drawables();

                this.listenTo(app.Drawables, "drawable:loaded", function(drawable) {
                    app.kinematics = drawable.getKinematics();
                });

                app.renderer = new m3Js.ThreeJSRenderer({
                    collection: app.Drawables
                });
                app.renderer.disableTransformControl();
                app.loader = new THREE.ColladaLoader();
                app.loader.options.convertUpAxis = true;

                var globalCh = Backbone.Wreqr.radio.channel('global');

                globalCh.vent.on("loadProgram", function(model) {
                    $.ajax({
                        url: model.get('path'),
                        dataType: "text",
                        success: function(data) {
                            _this.clearWorkspace();
                            console.log(data);
                            //console.log(app.workspace);
                            app.codeXmlDom = Blockly.Xml.textToDom(data);
                            Blockly.Xml.domToWorkspace(app.workspace, app.codeXmlDom);
                            var name = $("#program-name").empty();
                            name.append(model.get('name'));
                            //program - name
                            //console.log(app.workspace);
                            //app.codeXmlDom = data;
                            //Blockly.Xml.domToWorkspace(app.workspace, app.codeXmlDom);
                        }
                    });
                });

                globalCh.vent.on("saveProgram", function(name) {
                    app.codeXmlDom = Blockly.Xml.workspaceToDom(app.workspace);
                    var xmlText = Blockly.Xml.domToPrettyText(app.codeXmlDom);
                    app.code = _this.generateCSharpCode(); // C# code generation
                    var csFile = name.replace('xml', 'cs');
                    $.post("/designer/program/save", { "name": name, "value": xmlText }, function(data) {
                        console.log("Program save successful: " + name);
                        var pgmName = $("#program-name").empty();
                        pgmName.append(name);
                    });
                    $.post("/designer/program/savecs", { "name": csFile, "value": app.code }, function(data) {
                        console.log("CS Program save successful: " + name);
                    });
                });

                //app.skeleton.constants =
                //{
                //    circleRadius: 0.03,
                //    leafScale: 2.0
                //};

                app.robot = new robot();

                app.robotpoller = poller.get(app.robot, this.pollerOptions());
                app.robotpoller.on('error', function(model) {
                    globalCh.vent.trigger("serverCommunication", false);
                    console.error('Error retrieving Robot Status information from server!');
                });
                app.robotpoller.start();


                // Test Joint values poller
                var test_joint_options = {

                    // default delay is 1000ms
                    delay: 200,

                    // run after a delayed interval. defaults to false
                    // can be a boolean `true` to wait `delay` ms before starting or a number to override the wait period
                    delayed: 3000,

                    // do not stop the poller on error. defaults to false
                    // `error` event is always fired even with this option on.
                    continueOnError: false,

                    // condition for keeping polling active (when this stops being true, polling will stop)
                    //condition: function(model) {
                    //    return model.id === -1;
                    //}
                }

                //var _this = this;
                //app.testJointVals = new testJointVals();

                //app.testjointpoller = poller.get(app.testJointVals, test_joint_options);
                //app.testjointpoller.on('error', function (model) {
                //    globalCh.vent.trigger("serverCommunication", false);
                //    console.error('Error retrieving Robot Status information from server!');
                //});
                //app.testjointpoller.on('success', function(model) {
                //    _this.setJointVals(model);
                //    app.testJointVals.id = app.testJointVals.id + 1;
                //});
                //app.testjointpoller.on('complete', function (model) {
                //    console.log("Done !!!");
                //    //app.testJointVals.id = app.testJointVals.id + 1;
                //});
                //app.testjointpoller.start();

                // Robot Joint values
                app.jointVals = new jointVals();

                app.jointpoller = poller.get(app.jointVals, test_joint_options);
                app.jointpoller.on('error', function(model) {
                    globalCh.vent.trigger("serverCommunication", false);
                    console.error('Error retrieving Robot Status information from server!');
                });
                app.jointpoller.on('success', function(model) {
                    _this.setJointVals(model);
                });
                app.jointpoller.on('complete', function(model) {
                    console.log("Done !!!");
                });
                app.jointpoller.start();


                //initSkeletonPoller();

                // Human poller
                app.initHumanPoll = false;
                app.humanPollError = false;
            },

            initSkeletonPoller: function() {
                if (!app.initSkeletonPoller) {
                    var _this = this;
                    var globalCh = Backbone.Wreqr.radio.channel('global');
                    // Human Skeletons
                    var skeletonPollerOptions = {

                        // default delay is 1000ms
                        delay: 200,

                        // run after a delayed interval. defaults to false
                        // can be a boolean `true` to wait `delay` ms before starting or a number to override the wait period
                        delayed: 3000,

                        // do not stop the poller on error. defaults to false
                        // `error` event is always fired even with this option on.
                        continueOnError: false

                        // condition for keeping polling active (when this stops being true, polling will stop)
                        //condition: function(model) {
                        //    return model.id === -1;
                        //}
                    }

                    app.skeletons = new skeletons();

                    app.skeletonpoller = poller.get(app.skeletons, skeletonPollerOptions);
                    app.skeletonpoller.on('error', function(data) {
                        globalCh.vent.trigger("serverCommunication", false);
                        console.error('Error retrieving skeleton information from server!');
                    });
                    app.skeletonpoller.on('success', function(data) {
                        _this.updateSkeletons(data);
                    });
                    app.skeletonpoller.on('complete', function(data) {
                        console.log("Done !!!");
                    });
                    app.skeletonpoller.start();
                    app.initSkeletonPoller = true;
                }
            },

            setJointVals: function(jointModel) {
                if (jointModel != undefined && app.kinematics != undefined) {
                    for (var i = 0; i < 25; i++) {
                        app.kinematics.setJointValue(i, this.degrees(jointModel.get(i)), false);
                    }
                }
            },

            degrees: function(radians) {
                return radians * 180 / Math.PI;
            },

            getFileAjax: function(url) {
                return $.ajax({
                    type: "GET",
                    url: url,
                    cache: false,
                    async: false
                }).responseText;
            },

            replaceAllInstances: function(find, replace, str) {
                return str.replace(new RegExp(find, 'g'), replace);
            },

            generateCSharpCode: function() {
                var code = Blockly.CSharp.workspaceToCode(app.workspace);
                var template = this.getFileAjax('data/templates/NamespacesTemplate.cs');

                var newCode = this.replaceAllInstances('// MAIN_PROGRAM_HERE', code, template);
                return newCode;
            },

            index: function() {
                var _this = this;
                require(["jquery", "app", "views/designer", "views/monitor"],
                    function($, app, designer, monitor) {
                        _this.initCodeMenu();
                        //app.designer.show(new designer());
                        app.monitor.show(new monitor());
                        //app.viewport.show(app.renderer);
                        app.viewport.show(app.renderer);
                        app.workspace = Blockly.inject('blocklyDiv', {
                            grid:
                            {
                                spacing: 25,
                                length: 3,
                                colour: '#ccc',
                                snap: true
                            },
                            media: '../libs/google/blockly/media/',
                            toolbox: document.getElementById('toolbox')
                        });

                        $("#tabs").tabs();

                        _this.createNewDrawable({
                            colladaUrl: "models/collada/nao.dae"
                        });

                        if (!app.initHumanPoll) {
                            app.initHumanPoll = true;
                            (function humansPoll() {
                                if (app.humanPollError) {
                                    return;
                                } else {
                                    setTimeout(function() {
                                        $.ajax({
                                            url: "/humans",
                                            success: function(data) {
                                                //sales.setValue(data.value);
                                                $('#humansTree').JSONView(data);
                                            },
                                            error: function() {
                                                console.log('Error receiving humans data from server');
                                                app.humanPollError = true;
                                            },
                                            dataType: "json",
                                            complete: humansPoll
                                        });
                                    }, 200);
                                }
                            })();
                        }
                    });
            },

            checkProgramEmpty: function() {
                app.codeXmlDom = Blockly.Xml.workspaceToDom(app.workspace);
                var hasChildren = $(app.codeXmlDom).children('block').length > 0;
                if (hasChildren === false) {
                    console.log("Empty program");
                    return true;
                }
                return false;
            },

            clearWorkspace:function() {
                //app.codeXmlDom = Blockly.Xml.textToDom('<xml></xml>');
                //Blockly.Xml.domToWorkspace(app.workspace, app.codeXmlDom);

                //TODO Add confirmation dialog
                //if (count < 2) {
                app.workspace.clear();
                app.codeXmlDom = Blockly.Xml.workspaceToDom(app.workspace);
                //}

                var name = $("#program-name").empty();
                name.append("None");
            },

            initCodeMenu: function () {
                var _this = this;
                $("#run").button({
                        text: true,
                        icons: {
                            primary: "ui-icon-play"
                        }
                    })
                    .click(function() {
                        var options;

                        if ($(this).text() === "RUN") {
                            var programEmpty = _this.checkProgramEmpty();
                            if (programEmpty === false) {
                                app.code = _this.generateCSharpCode(); // C# code generation
                                //$.post("/designer/program/start", app.code, function (data) {
                                //    console.log("Program Sent & Started: " + data);
                                //});
                                //console.log(app.code);

                                app.codeXmlDom = Blockly.Xml.workspaceToDom(app.workspace);
                                var xmlText = Blockly.Xml.domToPrettyText(app.codeXmlDom);
                                //$.post("/designer/program/startxml", xmlText, function(data) {
                                //    console.log("Program Sent & Started: " + data);
                                //});
                                $.post("/designer/program/startcs", app.code, function (data) {
                                    console.log("Program Sent & Started: " + data);
                                });

                                options = {
                                    label: "STOP",
                                    icons: {
                                        primary: "ui-icon-stop"
                                    }
                                };
                            }
                        } else {

                            $.post("/designer/program/stop", function(data) {
                                console.log("Program Stopped: " + data);
                            });

                            options = {
                                label: "RUN",
                                icons: {
                                    primary: "ui-icon-play"
                                }
                            };
                        }
                        $(this).button("option", options);
                    });
                //ui-icon-document
                $("#code").button({
                        text: true,
                        icons: {
                            primary: "ui-icon-document"
                        }
                    })
                    .click(function() {
                        if (app.workspace != undefined) {
                            var programEmpty = _this.checkProgramEmpty();
                            if (programEmpty === false) {
                                //app.code = Blockly.Python.workspaceToCode(app.workspace);
                                app.code = _this.generateCSharpCode(); // C# code generation
                                $.post("/designer/program/code", app.code, function(data) {
                                    console.log("Sent Program: " + data);
                                });
                                console.log(app.code);

                                //app.codeXmlDom = Blockly.Xml.workspaceToDom(app.workspace);
                                //var xmlText = Blockly.Xml.domToPrettyText(app.codeXmlDom);
                                //console.log(xmlText);
                                //console.log(app.code);
                            }
                        }
                    });
                $("#open").button({
                        text: true,
                        icons: {
                            primary: "ui-icon-document"
                        }
                    })
                    .click(function() {
                        app.programs.fetch({
                            success: function() {
                                var dialog = new openDialog({
                                    collection: app.programs
                                });
                                //console.log(dialog);
                                app.modals.show(dialog);
                            }
                        });

                    });
                //ui - icon - trash

                $("#save").button({
                        text: true,
                        icons: {
                            primary: "ui-icon-disk"
                        }
                    })
                    .click(function () {
                        var programEmpty = _this.checkProgramEmpty();
                    if (programEmpty === false) {
                        var programName = $("#program-name").text();
                        var SaveModel = backbone.Model.extend({
                        });
                        var saveModel = new SaveModel();
                        saveModel.set({ name: programName });
                        //console.log(programName);
                        var dialog = new saveDialog({
                            model: saveModel
                        });
                        //console.log(dialog);
                        app.modals.show(dialog);
                    }
                    //app.codeXmlDom = Blockly.Xml.workspaceToDom(app.workspace);
                        //var hasChildren = $(app.codeXmlDom).children('block').length > 0;
                        //if (hasChildren === false) {
                        //    console.log("Empty program");
                        //} else {
                        //    console.log(app.codeXmlDom);
                        //    if (app.codeXmlDom != undefined) {
                        //        var xmlText = Blockly.Xml.domToPrettyText(app.codeXmlDom);
                        //        if (xmlText !== "") {
                        //            var dialog = new saveDialog({
                        //                programName: $("#program-name").text()
                        //            });
                        //            //console.log(dialog);
                        //            app.modals.show(dialog);
                        //        }
                        //    }
                        //}
                    });

                $("#clear").button({
                        text: true,
                        icons: {
                            primary: "ui-icon-trash"
                        }
                    })
                    .click(function () {
                        //app.code = _this.generateCSharpCode(); // C# code generation
                        //console.log(app.code);

                        //var blocks = app.workspace.getAllBlocks();
                        //// Iterate through every block and check the name.
                        //for (var x = 0; x < blocks.length; x++) {
                        //    console.log(blocks[x]);
                        //}

                        _this.clearWorkspace();
                });
            },


            createNewDrawable: function(options) {
                var newDrawable = new m3Js.Drawable(options);
                app.Drawables.add(newDrawable);
            },

            updateSkeletons: function(skeletonsJsonObject) {
                if (skeletonsJsonObject != undefined && skeletonsJsonObject.length > 0) {
                    console.log(skeletonsJsonObject);
                } else {
                    var existingSkeletons = app.Drawables.where({ skeleton: true });
                    if (existingSkeletons.length > 0) {
                        app.Drawables.remove(existingSkeletons);
                    }
                }
            },

            pollerOptions: function () {
                var options = {

                    // default delay is 1000ms
                    delay: 100,

                    // run after a delayed interval. defaults to false
                    // can be a boolean `true` to wait `delay` ms before starting or a number to override the wait period
                    delayed: 1000,

                    // do not stop the poller on error. defaults to false
                    // `error` event is always fired even with this option on.
                    continueOnError: false,

                    // condition for keeping polling active (when this stops being true, polling will stop)
                    //condition: function (model) {
                    //    return model.get('active') === true;
                    //},

                    // We can pass data to a fetch request
                    //data: { fields: "*", sort: "name asc" }
                }
            }
        });
    });