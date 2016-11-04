<?php
class aTest extends PHPUnit_Framework_TestCase{
	public static function setUpBeforeClass(){
		echo __METHOD__."\n";	
	}

	public function __construct(){
		echo __METHOD__."\n";	
	}

	public function testA(){
		$this->b();
	}
	
	private function b(){
		$this->assertTrue(false);
	}

	public function testDb(){
		var_dump($GLOBALS['DB_DSN']);
		var_dump($GLOBALS['DB_USER']);
		var_dump($GLOBALS['DB_PASSWD']);
		var_dump(DB_HOST);
	}
	
	public function clearMe(){
		echo __METHOD__."\n";
	}	

	public static function tearDownAfterClass(){
		echo __METHOD__."\n";	
	}
	 
	public function __destruct(){
		$this->clearMe();
		echo __METHOD__."\n";	
	}
	
}
