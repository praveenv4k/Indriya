﻿require.config({
    paths: {
        jquery: "../libs/jquery/jquery-2.1.3.min",
        jqueryui: "../libs/jquery-ui/jquery-ui",
        underscore: "../libs/underscore/underscore",
        backbone: "../libs/backbone/backbone",
        marionette: "../libs/marionette/backbone.marionette",
        poller: "../libs/backbone.poller/backbone.poller",
        text: "../libs/requirejs/text",
        joint: "../libs/joint/joint.nojquerynobackbone",
        slidebars: "../libs/slidebars/slidebars",
        threejs: "../libs/threejs/three",
        jsonview: "../libs/jquery-jsonview/jquery-jsonview",
        blockly: "../libs/google-blockly/blockly_compressed",
        blocks: "../libs/google-blockly/blocks_compressed",
        blockly_msg_en: "../libs/google-blockly/msg/js/en",
        handlebars: "../libs/handlebars/handlebars",
        orbitcontrols: "../js/controls/OrbitControls",
        colladaloader: "../js/loaders/ColladaLoader",
        webgldetector: "../js/Detector",
        marionette_threejs: "../libs/marionette-threejs/marionette-threejs"
    },
    shim: {
        // jQueryUI
        "jqueryui": ["jquery"],
        // Backbone
        "backbone": {
            deps: ["jquery", "underscore"],
            exports: "Backbone"
        },
        //Marionette
        "marionette": {
            "deps": ["underscore", "backbone", "jquery"],
            "exports": "Marionette"
        },
        // Underscore
        "underscore": {
            exports: "_"
        },
        // Joint JS
        "joint": {
            "deps": ["underscore", "backbone", "jquery"],
            "exports": "Joint"
        },
        // Json-view
        "jsonview": {
            "deps": ["jquery"]
        },
        // Blockly - Blocks
        "blocks": {
            "deps": ["blockly"]
        },
        // Blockly - Msgs
        "blockly_msg_en": {
            "deps": ["blocks"]
        },
        // threejs
        "threejs" : {
          exports: "THREE"  
        },
        // Marionette JS
        "marionette_threejs": {
            "deps": ["threejs","underscore", "backbone", "jquery"],
        },
        // collada loader
        "colladaloader": {
            //"deps": ["orbitcontrols", "threejs", "webgldetector"]
            "deps": ["threejs", "webgldetector"]
        }
    }
});

// Include Desktop Specific JavaScript files here (or inside of your Desktop Controller, or differentiate based off App.mobile === false)
//require(["app", "jquery", "routers/approuter", "controllers/appcontroller", "backbone", "marionette", "jqueryui", "handlebars"],
require(["app", "jquery", "routers/approuter", "controllers/appcontroller", "backbone", "marionette", "jqueryui", "threejs",
                "colladaloader", "blocks", "blockly_msg_en", "orbitcontrols", "marionette_threejs"],
    function(app, $, appRouter, appController) {
        //$.mobile.ajaxEnabled = false;
        //// Prevents all anchor click handling
        //$.mobile.linkBindingEnabled = false;
        //// Disabling this will prevent jQuery Mobile from handling hash changes
        //$.mobile.hashListeningEnabled = false;
        ////        $.mobile.ajaxEnabled = false;
        //$.mobile.pushStateEnabled = false;

        app.appRouter = new appRouter({
            controller: new appController()
        });
        app.start();
    });