open Express;

let app = express();

App.get(
  app,
  ~path="/status",
  Middleware.from((_next, _req) => Response.sendJson(Respond.successJson())),
);

let server = App.listen(app, ~port=4000, Js.log("Server running"));
