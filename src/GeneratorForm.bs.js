// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var Emotion = require("bs-emotion/src/Emotion.bs.js");
var Input$DvbGenerator = require("./Input.bs.js");
var Button$DvbGenerator = require("./Button.bs.js");

var formStyle = Emotion.css(undefined, /* :: */[
      Emotion.label("formStyle"),
      /* :: */[
        Emotion.alignSelf(/* center */98248149),
        /* :: */[
          Emotion.width(/* auto */-1065951377),
          /* [] */0
        ]
      ]
    ]);

function GeneratorForm(Props) {
  return React.createElement("form", {
              className: formStyle
            }, React.createElement(Input$DvbGenerator.make, {
                  label: "Choose your URL : "
                }), React.createElement(Button$DvbGenerator.make, {
                  label: "Generate"
                }));
}

var make = GeneratorForm;

exports.formStyle = formStyle;
exports.make = make;
/* formStyle Not a pure module */
