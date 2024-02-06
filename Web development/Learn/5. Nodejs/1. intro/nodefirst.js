var http = require("http");
var dt = require("./myfirstmnodule");

http
  .createServer(function (req, res) {
    res.write("Hello " + dt.myDateTime() + "\n" + dt.print());
    res.end("\nThe END");
  })
  .listen(141);