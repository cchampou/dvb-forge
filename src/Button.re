open Emotion;

let buttonStyle = [%css
  [backgroundColor(`hex("dbd56e")), fontSize(`px(20)), borderWidth(`px(0)), margin(`px(20))]
];

[@react.component]
let make = (~label) => {
  <button type_="submit" className=buttonStyle> {React.string(label)} </button>;
};
