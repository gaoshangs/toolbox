<?php

/**
 * PHP amqp(RabbitMQ) Demo-4
 * @author  yuansir <yuansir@live.cn/yuansir-web.com>
 */
$exchangeName = 'direct_logs';
$queueName = 'log_piece';//处理warnning，error

$connection = new AMQPConnection(array('host' => '127.0.0.1', 'port' => '5672', 'vhost' => '/', 'login' => 'guest', 'password' => 'guest'));
$connection->connect() or die("Cannot connect to the broker!\n");
$channel = new AMQPChannel($connection);
$exchange = new AMQPExchange($channel);
$exchange->setName($exchangeName);
$exchange->setType(AMQP_EX_TYPE_DIRECT);
$exchange->declareExchange();
$queue = new AMQPQueue($channel);
$queue->setName($queueName);
$queue->declareQueue();

$severities = $argv;
$file = $severities[0];
unset($severities[0]);
if (!$severities) {
    var_dump("Usage:$file [info] [warning] [error]");
    exit();
} else {
    foreach ($severities as $item) {
        if(!in_array($item,array('warning','error'))){
            die('wrong binding param'.$item);
        }
        $queue->bind($exchangeName, $item);
    }
}

var_dump('[*] Waiting for messages. To exit press CTRL+C');
while (TRUE) {
    $queue->consume('callback');
}
$connection->disconnect();

function callback(AMQPEnvelope $envelope, AMQPQueue $queue) {
    $msg = $envelope->getBody();
    var_dump('[x]' . $envelope->getRoutingKey() . ':' . $msg);
    $queue->nack($envelope->getDeliveryTag());
}
