<?php
function foobar($arg,$arg2){
	return __FUNCTION__." got $arg and $arg2 \n";
}

class foo{
	function bar($arg,$arg2){
		echo __METHOD__." got $arg and $arg2\n";
	}
}

$foobar = call_user_func_array("foobar",array("one","two"));
var_dump($foobar);
$foobar1 = call_user_func_array("foobar1",array("one","two"));
var_dump($foobar1);
$foo = new foo;
call_user_func_array(array($foo,"bar"),array('one','two'));
