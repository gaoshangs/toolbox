<?php
$redis = new Redis();
$redis->connect('127.0.0.1',6379);
$redis->set('zhangsan','1234');
var_dump($redis->get('zhangsan'));
$redis->close();
$t = new Redis();
$t->connect('127.0.0.1',6379);
var_dump($t->get('zhangsan'));
$t->close();

sleep(1000);
