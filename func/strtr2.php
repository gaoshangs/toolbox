<?php
$template = "你真的觉得这一切都是湖人的吗？你错了";
$replace = array('真的'=>'zhen de', '觉'=>'jue', '得'=>'de', '觉得'=>'jue de');

function cmb($a, $b){
    if(mb_strlen($a) < mb_strlen($b)){
        return 1; 
    }
    if(mb_strlen($a) == mb_strlen($b)){
        return 0; 
    }
    if(mb_strlen($a) > mb_strlen($b)){
        return -1; 
    }
}

uksort($replace, 'cmb');

foreach($replace as $k=>$v){
    $template = str_replace($k, $v, $template);
}

exit;
$string = strtr($template, $replace);
echo $string;
