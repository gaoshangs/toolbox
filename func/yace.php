<?php
require 'time.php';
$times = (int)$argv[1];
$func = $argv[2];
require "$func.php";

unset($argv[0]);
unset($argv[1]);
unset($argv[2]);

$start = getTime();
for($i=0;$i<$times;$i++)
    call_user_func_array($func,$argv);
echo "耗时:".(getTime()-$start)."s";
