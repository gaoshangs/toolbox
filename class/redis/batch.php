<?php
$redis = new Redis();
$redis->connect('127.0.0.1');
$num = 20;
for($i=0; $i < $num; $i++){
	$redis->sAdd('batch',$i);
	$redis->set('batch_'.$i,$i);
}
$redis->close();
