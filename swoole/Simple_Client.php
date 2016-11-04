<?php

/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 16/3/17
 * Time: 下午4:01
 */
class Client
{
    /**
     * @var swoole_client
     */
    private $client;
    public function __construct()
    {
        $this->client = new swoole_client(SWOOLE_SOCK_TCP);
    }

    public function connect()
    {
        $fp = $this->client->connect("127.0.0.1",9501,1);
        if(!$fp){
            echo "Error:{$fp->errMsg}[{$fp->errCode}]\n";
        }
        $message = $this->client->recv();
        echo "Get Message From Server:{$message}\n";
        fwrite(STDOUT,"请输入消息:");
        $msg = trim(fgets(STDIN));
        $this->client->send($msg);
    }
}

$client = new Client();
$client->connect();