open Emotion;

let inputStyle = [%css
  [
    borderRadius(`px(2)),
    backgroundColor(`hex("f2efea")),
    borderWidth(`px(0)),
    fontSize(`px(20)),
    minWidth(`px(500)),
  ]
];

let labelStyle = [%css [color(`hex("dbd56e")), fontSize(`px(20))]];

[@react.component]
let make = (~label) => {
  <label htmlFor="url" className=labelStyle>
    {React.string(label)}
    <br />
    <input type_="text" id="url" className=inputStyle />
  </label>;
};
