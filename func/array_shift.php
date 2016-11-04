<?php
class b {
}
$b = new b();
$a = array('test'=> array(1=>$b, 2=>$b,3=>$b));
var_dump(empty(array_shift($a['test'])));
var_dump(array_shift($a['test']));
var_dump(array_shift($a['test']));
var_dump(array_shift($a['test']));
var_dump(empty($a['test']));
exit;
var_dump(array_push($a, "a4"));
print_r($a);
