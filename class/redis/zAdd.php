<?php
$redis = new Redis();
$redis->connect('127.0.0.1','6379');
$redis->zAdd('key',0,'val01');
$redis->zAdd('key',0,'val02');
$redis->zAdd('key',1,'val11');
$redis->zAdd('key',2,'val21');
$redis->zAdd('key',2,'val22');
$redis->zAdd('key',2,'val23');
$redis->zAdd('key',2,'val24');
$q = $redis->zRange('key',0,-1,true);
print_r(array_flip($q));
$redis->close();
