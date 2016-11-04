<?php

class Client
{
    private $client;

    public function __construct()
    {
        $this->client = new swoole_client(SWOOLE_SOCK_TCP, SWOOLE_SOCK_ASYNC);
        $this->client->on('Connect', array($this, 'onConnect'));
        $this->client->on('Receive', array($this, 'onReceive'));
        $this->client->on('Close', array($this, 'onClose'));
        $this->client->on('Error', array($this, 'onError'));
    }

    public function connect()
    {
        $fp = $this->client->connect('127.0.0.1', 9501, 1);
        if (!$fp) {
            echo "Error:{$fp->errMsg}[{$fp->errCode}]\n";
            return;
        }
    }

    public function onConnect( swoole_client $cli) {
        fwrite(STDOUT,"请输入消息:\n");
//        $msg = trim(fgets(STDIN));
//        $this->client->send($msg);
        swoole_event_add(STDIN, function($fp){
            global $cli;
            fwrite(STDOUT, "Enter Msg:");
            $msg = trim(fgets(STDIN));
            $this->client->send( $msg );
        });
    }

    public function onReceive(Swoole_client $cli, $data)
    {
        echo "Get Message From Server:{$data} \n";
//        fwrite(STDOUT,"请输入消息:");
//        $msg = trim(fgets(STDIN));
//        $this->client->send($msg);
    }

    public function onClose($cli)
    {
        echo "Client close connection\n";
    }

    public function onError()
    {
        echo "Client error:";
    }

    public function send($data)
    {
        $this->client->send($data);
    }

    public function isConnected()
    {
        return $this->client->isConnected();
    }
}

$cli = new Client();
$cli->connect();