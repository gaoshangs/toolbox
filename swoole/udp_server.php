<?php
/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 16/3/18
 * Time: 下午3:04
 */
class Server
{
    private $serv;
    public function __construct()
    {
        $this->serv = new swoole_server('127.0.0.1',9502,SWOOLE_PROCESS,SWOOLE_SOCK_UDP);
        $this->serv->on('Packet',array($this,'onPacket'));
        $this->serv->start();
    }

    public function onPacket(swoole_server $serv,$data,$clientInfo)
    {
        $serv->sendto($clientInfo['address'], $clientInfo['port'], "Server ".$data);
        var_dump($clientInfo);
    }
}

$server = new Server();