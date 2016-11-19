<?php
$a = ['a', 'b'];
$b = [];

$b[0] = $a[1];
$b[1] = $a[0];
print_r($b);
echo implode(',',$b);
exit();
    $a = array("", "", "", 0, null);
    var_dump(implode(", ", $a));
