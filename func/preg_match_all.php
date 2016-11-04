<?php
$pattern = '/.{1}|.{1}$/us';
$str = "张三,吗？ 你是吗 ";
preg_match_all($pattern, $str, $matches);
var_dump($matches);




exit();
$str = "<b>example:<img src='aaa' /> </b><div align=left>this is a test</div>";
$pattern = '|<[^>]+>(.*)</[^>]+>|U';
preg_match($pattern, $str, $matches);
preg_match_all($pattern,$str, $out, PREG_PATTERN_ORDER);
print_r($matches);
print_r($out);
