<?php
/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 16/3/21
 * Time: 上午11:05
 */
require 'MqConfig.php';

class Producer{
    private $conn;
    private $channel;
    public function __construct()
    {
        $mqConfig = new MqConfig();
        $this->conn = $mqConfig->conn;
        $this->channel = $mqConfig->channel;
    }

    /**
     * 生产者：发送消息
     * 逻辑：创建连接-->创建channel-->创建交换机对象-->发送消息*
     */
    public function publishMsg(){
        $e_name='e_gason';
        $k_route = array(0=>'key_1',1=>'key_2');//路由key
        $message = 'Testing push message ';

        //创建交换机
        $ex = new AMQPExchange($this->channel);
        $ex->setName($e_name);
        $ex->setType(AMQP_EX_TYPE_DIRECT);
//        $ex->setType(AMQP_EX_TYPE_TOPIC);
        $ex->setFlags(AMQP_DURABLE);//持久化
        echo "Exchange Status:".$ex->declareExchange()."\n";
        for($i=0;$i<5;++$i){
            echo "Send Message:".$ex->publish($message.$i,$k_route[$i%2])."\n";
        }
    }

    public function __destruct(){
        $this->conn->disconnect();
    }
}

$producer = new Producer();
$producer->publishMsg();