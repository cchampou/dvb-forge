open Emotion;

let formStyle = [%css [alignSelf(`center), width(`auto)]];

[@react.component]
let make = () => {
  <form className=formStyle> <Input label="Choose your URL : " /> <Button label="Generate" /> </form>;
};
