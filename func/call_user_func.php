<?php
function a1(){
	return __FUNCTION__;
}

function a2(){
	return __FUNCTION__;
}
//var_dump(call_user_func(''));
class b1{
	public function foo(){
		return __METHOD__;
	}
 }
class b2{
	public function foo(){
		return __METHOD__;
	}
 }
var_dump(call_user_func(array(new b1(),'')));
