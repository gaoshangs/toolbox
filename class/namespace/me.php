<?php
use a\b\test;
define("BATH_PATH", __DIR__.'/');
function my_autoloader($class){
    $class_path = str_replace("\\", DIRECTORY_SEPARATOR, $class);
    require BATH_PATH.$class_path.".php";
}
spl_autoload_register('my_autoloader');
$bro = new brother();
$bro->bro();
$test = new test();
$test->oob();
