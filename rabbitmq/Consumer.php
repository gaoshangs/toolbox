<?php

/**
 * Created by PhpStorm.
 * User: gaoshangwang
 * Date: 16/3/21
 * Time: 下午5:07
 */
require_once 'MqConfig.php';

class Consumer
{
    private $conn;
    private $channel;
    public function __construct(){
        $mqConfig = new MqConfig();
        $this->conn = $mqConfig->conn;
        $this->channel = $mqConfig->channel;
    }

    /**
     * 消费者：接收消息
     * 逻辑：创建连接-->创建channel-->创建交换机-->创建队列-->绑定交换机/队列/路由键-->接收消息*
     */
    public function dealMsg(){
        $e_name = 'e_gason';
        $q_name_1 = 'q_gason_1';
        $q_name_2 = 'q_gason_2';
//        $k_route = array(0=>'key_1',1=>'key_2');
        $k_route_1 = "key_1";
        $k_route_2 = "key_2";

        //创建交换机
        $ex = new AMQPExchange($this->channel);
//        $ex->delete($e_name);
        $ex->setName($e_name);
        $ex->setType(AMQP_EX_TYPE_DIRECT);//direct类型
//        $ex->setType(AMQP_EX_TYPE_TOPIC);//topic类型
        $ex->setFlags(AMQP_DURABLE);//持久化
        echo "Exchange Status:".$ex->declareExchange()."\n";

        $q_1 = $this->makeQueue($q_name_1,$e_name,$k_route_1);
        $q_2 = $this->makeQueue($q_name_2,$e_name,$k_route_2);

        //阻塞模式接受消息
        echo "Message:\n";
        while(true){
            $q_1->consume(array($this,'processMessage'));
            $q_2->consume(array($this,'processMessage'));
        }
    }

    private function makeQueue($q_name,$e_name,$k_route,$flags=AMQP_DURABLE){
        $q = new AMQPQueue($this->channel);
        $q->setName($q_name);
        $q->setFlags($flags);
        echo "$q_name 's Messae Total:".$q->declareQueue()."\n";
        echo "Exchange ($e_name) Bind Quque ($q_name):".$q->bind($e_name,$k_route)."\n";
        return $q;
    }

    /**
     * 消费回调函数
     * 处理消息
     */
    public function processMessage(AMQPEnvelope $envelope,AMQPQueue $queue){
        $msg = $envelope->getBody();
        echo $msg."\n";//处理消息
        $queue->ack($envelope->getDeliveryTag());//手动发送ACK应答
    }


    public function __destruct(){
        $this->conn->disconnect();
    }
}

$consumer = new Consumer();
$consumer->dealMsg();