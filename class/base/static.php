<?php
class test{
public static $test2;

public static function foo1(){
	self::$test2 = new test2();
	self::$test2->foo3();
}

public function foo2(){
	echo __METHOD__."\n";
}

}
class test2{

public function foo3(){
	echo __METHOD__."\n";
	echo "foo3\n";
}
}
$test = new test();
$test::foo1();
