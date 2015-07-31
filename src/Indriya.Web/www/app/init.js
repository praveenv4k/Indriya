﻿require.config({
    paths: {
        jquery: "../libs/jquery/jquery-2.1.3.min",
        jqueryui: "../libs/jquery-ui/jquery-ui.min",
        underscore: "../libs/underscore/underscore-min",
        backbone: "../libs/backbone/backbone-min",
        marionette: "../libs/marionette/backbone.marionette",
        'backbone.marionette': "../libs/marionette/backbone.marionette", //alias
        poller: "../libs/backbone.poller/backbone.poller.min",
        text: "../libs/requirejs/text",
        //slidebars: "../libs/slidebars/slidebars",
        jsonview: "../libs/jquery-jsonview/jquery.jsonview",
        blockly: "../libs/google/blockly/blockly_compressed",
        blocks: "../libs/google/blockly/blocks_compressed",
        blockly_msg_en: "../libs/google/blockly/msg/js/en",
        blockly_python: "../libs/google/blockly/python_compressed",
        blockly_csharp: "../libs/google/blockly/csharp_compressed"
        //handlebars: "../libs/handlebars/handlebars"
        // r68
        //, threejs: "../libs/threejs/r68/three"
        //, colladaloader: "../libs/threejs/r68/ColladaLoader"
        // r71
        , threejs: "../libs/threejs/three"
        , orbitcontrols: "../js/controls/OrbitControls"
        , projector: "../js/renderers/Projector"
        , colladaloader: "../js/loaders/ColladaLoader"

        //webgldetector: "../js/Detector",
        , marionette_threejs: "../libs/marionette-threejs/marionette-threejs"
        // Backbone Marionette modal
        , backboneModal : "../libs/backbone.modal/backbone.modal-min"
        , backboneMarionetteModals : "../libs/backbone.modal/backbone.marionette.modals"
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
            exports: "Marionette"
        },
        "backbone.marionette": {
            "deps": ["underscore", "backbone", "jquery"],
            exports: "Marionette"
        },
        // Underscore
        "underscore": {
            exports: "_"
        },
        // Backbone Modal
        "backboneModal": {
            "deps": ["underscore", "backbone", "jquery"]
        },
        // Backbone Marionette Modal
        "backboneMarionetteModals": {
            "deps": ["marionette", "backboneModal"]
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
        // Python code generation
        "blockly_python": {
            "deps": ["blockly", "blocks"]
        },
        // Python code generation
        "blockly_csharp": {
            "deps": ["blockly", "blocks"]
        },
        // Marionette Three JS
        "threejs": {
            exports: "THREE"
        },
        // Marionette Three JS
        "marionette_threejs": {
            "deps": ["threejs"]
        }
        ,"colladaloader": {
            "deps": ["threejs"]
        },
        "projector": {
            "deps": ["threejs"]
        }
    }
});

// Include Desktop Specific JavaScript files here (or inside of your Desktop Controller, or differentiate based off App.mobile === false)
//require(["app", "jquery", "routers/approuter", "controllers/appcontroller", "backbone", "marionette", "jqueryui", "handlebars"],
require(["app", "jquery", "routers/approuter", "controllers/appcontroller", "backbone", "marionette", "jqueryui", 
                "blocks", "blockly_msg_en", "colladaloader", "projector", "blockly_python", "blockly_csharp", "backboneModal", "backboneMarionetteModals"],
                //, "marionette_threejs","projector", "colladaloader"],
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