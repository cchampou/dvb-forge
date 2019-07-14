open Emotion;
open Types;
let buttonStyle = [%css
  [
    backgroundColor(`hex("dbd56e")),
    fontSize(`px(20)),
    borderWidth(`px(0)),
    margin(`px(20)),
  ]
];

[@react.component]
let make = (~label, ~status) => {
  let display =
    switch (status) {
    | Loading => "loading"
    | Loaded => label
    | Error => "Error"
    };

  <button type_="submit" className=buttonStyle>
    {React.string(display)}
  </button>;
};
