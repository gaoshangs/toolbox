<?php
$a = array(1,2,3);
function t(&$c){
    $b = &$c;
    $b[] = 4;
}
t($a);
var_dump($a);

