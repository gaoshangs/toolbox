<?php

class foo{
function __construct(){
	$res = @call_user_func(array($this,'do_bar1'),'lala');
	var_dump($res);
}

function bar1($data){
	throw new Exception('Test Bad');
	return array('aa','bb');
}
}
$foo = new foo();
