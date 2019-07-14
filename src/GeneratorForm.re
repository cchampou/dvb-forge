open Emotion;
open Types;

let formStyle = [%css [alignSelf(`center), width(`auto)]];

[@react.component]
let make = () => {
  let (url, setUrl) = React.useState(() => "");
  let (loadingState, setLoadingState) = React.useState(() => Loaded);
  let handleTyping = ev => setUrl(ReactEvent.Form.target(ev)##value);
  let handleSubmit = ev => {
    setLoadingState(_ => Loading);
    ReactEvent.Form.preventDefault(ev);
    Api.generateUrl(~url, ~callBack=state => setLoadingState(_ => state));
  };

  <form className=formStyle onSubmit=handleSubmit>
    <Input label="Choose your URL : " value=url onChange=handleTyping />
    <Button label="Generate" status=loadingState />
  </form>;
};
