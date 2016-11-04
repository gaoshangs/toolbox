<?php
$task = array(
	'url'=>'http://www.toolbox.com/push/work.php?a=b',
	'device_id'=>'12,34,55',
	'action'=>'hhh,lalal',
	'msg'=>'woshilalala'
);
$url  = $task['url'];
unset($task['url']);
//echo http_build_query($task); 
//echo sprintf($task['url'], $task['device_id'], $task['action'], $task['msg']);
//var_dump(http_build_query(array()));exit;
$a = "我不是马云，我是属马";
//$b = "听说赵薇和马云是好朋友";
$b = urlencode($a);
$c = urlencode($b);
$d = urldecode($b);
$e = urldecode($c);
var_dump($a);
var_dump($b);
var_dump($c);
var_dump($d);
var_dump($e);
