<?php
function __autoload($className){
	include $className.'.class.php';
}
$test = new test();
echo $test->a;
