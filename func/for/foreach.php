<?php
$a = array(
	1,2,3,4,5,6,7,8
);
$b = array();
foreach($b as $b_v){
	var_dump($b_v);
}
foreach($a as $k=>$v){
	echo "$v\n";
	$b[] = $v;
	unset($a[$k]);
}
//var_dump($a);
//print_r($b);
