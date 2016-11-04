<?php
function utf8_str_split($str, $split_len = 1)
{
    $len = mb_strlen($str, 'UTF-8');
    if ($len <= $split_len)
        return array($str);
    $reg = '/.{'.$split_len.'}|[^\x00]{1,'.$split_len.'}$/us';
    echo $reg;
    preg_match_all($reg, $str, $ar);
    print_r($ar);
    return $ar[0];
}

function str_split_unicode($str, $l=1){
    $ret = array(); 
    $len = mb_strlen($str, 'UTF-8');
    for($i=0;$i < $len; $i+=$l){
        $ret[] = mb_substr($str, $i, $l, 'UTF-8'); 
    }
    return $ret;
}
