open Types;
open Config;

let generateUrl = (~url, ~callBack) => {
  callBack(Loading);
  Js.Promise.(
    Fetch.fetch(apiBaseUrl ++ "/generate?url=" ++ url)
    |> then_(Fetch.Response.text)
    |> then_(json => json |> (_ => callBack(Loaded)) |> resolve)
    |> catch(err => {
         Js.log(err);
         Js.Promise.resolve(callBack(Error));
       })
    |> ignore
  );
};
