<?php
	function my_autoload($class){
		include $class.'.class.php';
	}
	
	function my_vendor($class){
	  $file = __DIR__.'/'.str_replace("\\","/",$class).".php";	
	  if(file_exists($file)){
		require $file;	
	  }
	}

	//spl_autoload_register('my_autoload',true);
	spl_autoload_register('my_vendor',true,true);
	//$test = new test();
	//echo $test->a;
	//var_dump(spl_autoload_functions());
$pack1 = new vendor\pack1\utils();
$pack2 = new vendor\pack2\utils();
$pack1->show();
$pack2->show();
