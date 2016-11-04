<?php
$str = '中a文3测试';
//var_dump(mb_detect_encoding($str));//检测字符编码
//exit();
$pattern = "/[\x{4e00}-\x{9fa5}]/u";
if (preg_match($pattern, $str, $match)) {
    echo '含有汉字';    
} else {
    echo '不含有汉字';
}
var_dump($match);
