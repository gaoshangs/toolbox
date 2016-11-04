<?php
$template = "你真的觉得这一切都是湖人的吗？你错了";
$replace = array('真的'=>'zhen de', '觉'=>'jue', '得'=>'de', '觉得'=>'jue de');

$res = preg_replace("/$template/", array_values($replace), array_keys($replace));

var_dump($res);



exit;
$reg = "/，|、/";
$replace = ",";
$part = "哈哈、哈哈，啦啦  你好呢";
$part = preg_replace("/s(?=s)/", "\0", $part);
$res = preg_replace($reg, $replace, $part);

var_dump(explode(',', $res));
