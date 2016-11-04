<?php
$b = array('b1', 'b2', 'b3');
$search = array('b1', 'b2');

var_dump(array_search($search, $b));

exit;
$a = array('a', 'a');
//unset($a[array_search('a', $a)]);
var_dump(array_search('a', $a));
print_r($a);
