var http = require('http');
http.createServer(function(request, response){
    //发送HTTP头部
    //HTTP状态值:200 0k
    //内容类型:text/plain
    response.writeHead(200,{'Content-Type': 'text/json'});

    //发送响应数据
    response.end('{"1":"123","2":"456","3":"789"}');
}).listen(8888);
console.log("Server runing at http://127.0.0.1:8888/");
