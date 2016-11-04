<?php
$redis = new Redis();
$redis->connect('127.0.0.1','6379');
$q = $redis->zRangeByScore('key',0,'(1');
print_r($q);

$redis->zRem('key','val01');

$q = $redis->zRangeByScore('key',0,'(1');
print_r($q);
$redis->close();
//sleep(100);
