<?php
/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 16/3/18
 * Time: 下午3:24
 */
class Server
{
    private $http;
    public function __construct()
    {
        $this->http = new swoole_http_server('127.0.0.1',9503);
        $this->http->on('request',array($this,'onRequest'));
        $this->http->start();
    }

    public function onRequest(swoole_http_request $request,swoole_http_response $response)
    {
        $message = json_encode($request);
        $response->header("Server", "Test Server/Swoole ".swoole_version());
        $response->header("Content-Type", "application/json");
        $response->status(200);
        $response->end($message);
    }
}

$server = new Server();
