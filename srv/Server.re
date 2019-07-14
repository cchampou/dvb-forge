open Express;

let app = express();

App.get(
  app,
  ~path="/status",
  Middleware.from((_next, _req) => Response.sendJson(Respond.successJson())),
);

type validQuery = {url: string};

let decodeQuery = json => Json.Decode.{url: json |> field("url", string)};

let encodeQuery = record =>
  Json.Encode.object_([("url", Js.Json.string(record.url))]);

App.get(
  app,
  ~path="/generate",
  Middleware.from((_next, req) => {
    let json = Js.Json.object_(Request.query(req));
    let query = decodeQuery(json);
    let response = encodeQuery(query);
    Response.sendJson(response);
  }),
);

let server = App.listen(app, ~port=4000, Js.log("Server running"));
