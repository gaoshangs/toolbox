<?php
include('time.php');
$start = getTime();
$dict = include(__DIR__.'/words_0');
$str = "曾国藩老人家是谁";
//$str = "你真的觉得这一切都是湖人的吗？你错了";
for($i=0; $i<100000; $i++){
    $str = strtr($str,  $dict);
    //echo $str."\n";
}
echo "耗时:".(getTime()-$start)."s";
exit;
$addr = "testxxxTSWWD";
$addr = strtr($addr, "xxx", "aaa");
echo $addr."\n";
