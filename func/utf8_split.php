<?php
require 'time.php';
$start = getTime();

function utf8_str_split($str, $split_len = 1)
{
//    if (!preg_match('/^[0-9]+$/', $split_len) || $split_len < 1)
//        return FALSE;
    $len = mb_strlen($str, 'UTF-8');
    if ($len <= $split_len)
        return array($str);
    preg_match_all('/.{'.$split_len.'}|[^\x00]{1,'.$split_len.'}$/us', $str, $ar);

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


//$str = $argv[1];
$str = "对不起la,我，是，卧底,真的很抱歉";
for($i=0;$i<1000000;$i++)
    utf8_str_split($str);
    //str_split_unicode($str);
echo "耗时:".(getTime()-$start)."s";
