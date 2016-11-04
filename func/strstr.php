<?php
$a = '0xx';
var_dump(strstr($a,'0xx') == true);
exit;
$material['pic_name'] = '1466506077_1_2.png';
$itemNum = explode('_', $material['pic_name'])[2];
$itemNum = trim($itemNum,strstr($itemNum,'.'));

var_dump($itemNum);

exit;
$str = '|null';
var_dump(strstr($str,'|'));
