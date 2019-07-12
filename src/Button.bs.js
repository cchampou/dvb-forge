// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var Emotion = require("bs-emotion/src/Emotion.bs.js");

var buttonStyle = Emotion.css(undefined, /* :: */[
      Emotion.label("buttonStyle"),
      /* :: */[
        Emotion.backgroundColor(/* `hex */[
              5194459,
              "dbd56e"
            ]),
        /* :: */[
          Emotion.fontSize(/* `px */[
                25096,
                20
              ]),
          /* :: */[
            Emotion.borderWidth(/* `px */[
                  25096,
                  0
                ]),
            /* :: */[
              Emotion.margin(/* `px */[
                    25096,
                    20
                  ]),
              /* [] */0
            ]
          ]
        ]
      ]
    ]);

function Button(Props) {
  var label = Props.label;
  return React.createElement("button", {
              className: buttonStyle,
              type: "submit"
            }, label);
}

var make = Button;

exports.buttonStyle = buttonStyle;
exports.make = make;
/* buttonStyle Not a pure module */
