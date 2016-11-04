<?php
/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 16/3/21
 * Time: 上午10:38
 */
class MqConfig{
    public $conn_args = array(
        'host'=>'127.0.0.1',
        'port'=>'5672',
        'login'=>'guest',
        'password'=>'guest',
        'vhost'=>'/'
    );
    public $conn;
    public $channel;

    public function __construct(){
        $this->conn = $this->mqConnect();
        $this->channel = $this->mqChannel();
    }

    public function mqConnect(){
        $conn = new AMQPConnection($this->conn_args);
        if(!$conn->connect()){
            die("Cannot connect to the broker!\n");
        }
        return $conn;
    }
    /**
     * 获取实例
     */
    public function mqChannel(){
        $channel = new AMQPChannel($this->conn);
        return $channel;
    }
}