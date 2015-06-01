var http = require('http');
var PORT = 8888
http.createServer(function(request, response) {
    console.log(request);
    response.writeHead(200,{'Content-Type':'text/plain'});
    response.end('Hello World\n');
 }).listen(PORT);

 console.log('Server running at http://127.0.0.1:' + PORT);
