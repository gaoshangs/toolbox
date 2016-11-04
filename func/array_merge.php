<?php
    $x = array(3=>1, 4=>3, 5=>5);
    $y = array(4=>4, 7=>5, 8=>6);
    print_r($y+$x);
    print_r(array_merge($x, $y));
    exit;
	$a = array('q_23'=>'im 23','q_20'=>'im 20');
	$b = array('q_10'=>'im 10');
	$res = array_merge($a,$b);
	print_r($res);
	$piece = array_shift($res);	
	print_r($piece);
	print_r($res);
