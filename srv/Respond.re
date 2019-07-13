let successJson = () => {
  let json = Js.Dict.empty();
  Js.Dict.set(json, "success", Js.Json.boolean(true));
  Js.Json.object_(json);
};
