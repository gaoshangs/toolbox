<?php
$a = 11;
$b = 2;
var_dump($a+++$b);
var_dump($a);
var_dump($b);
echo "=======\n";
$a = 12;
$b =1;
$c = $a - ($b--);
$d = (++$a) - (--$b);
var_dump($a,$b,$c,$d);
