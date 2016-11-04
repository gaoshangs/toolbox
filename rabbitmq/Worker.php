<?php

/**
 * PHP amqp(RabbitMQ) Demo-2
 * @author  yuansir <yuansir@live.cn/yuansir-web.com>
 */
$exchangeName = 'demo3';
$queueName = 'task_queue_3';
$routeKey = 'task_queue_3';

$connection = new AMQPConnection(array('host' => '127.0.0.1', 'port' => '5672', 'vhost' => '/', 'login' => 'guest', 'password' => 'guest'));
$connection->connect() or die("Cannot connect to the broker!\n");
$channel = new AMQPChannel($connection);
$exchange = new AMQPExchange($channel);
$exchange->setName($exchangeName);
$exchange->setType(AMQP_EX_TYPE_DIRECT);
//$exchange->setFlags(AMQP_DURABLE);
$exchange->declareExchange();

$queue = new AMQPQueue($channel);
$queue->setName($queueName);
//$queue->setFlags(AMQP_DURABLE);
$queue->declareQueue();

$queue->bind($exchangeName, $routeKey);

var_dump('[*] Waiting for messages. To exit press CTRL+C');
while (TRUE) {
    $queue->consume('callback');
    $channel->qos(0,1);
}
$connection->disconnect();

function callback(AMQPEnvelope $envelope, AMQPQueue $queue) {
    $msg = $envelope->getBody();
    var_dump(" [x] Received:" . $msg);
    sleep(substr_count($msg,'.'));
    $queue->ack($envelope->getDeliveryTag());
}
