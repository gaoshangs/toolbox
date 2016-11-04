<?php
$num = 2000;
for($i = 0; $i < $num; $i++){
    echo "$i\n";
    $redis = new Redis();
    $redis->connect("127.0.0.1", "6379");
    sleep(1);
}
sleep(10);
//$redis->close();
