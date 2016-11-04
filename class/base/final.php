<?php
final class Base{
    
    public function __construct(){
        echo __METHOD__."\n"; 
    }

    final public function moreTesting(){
        echo __METHOD__."\n"; 
    }
}

class Child extends Base{
/*
    public function moreTesting(){
        echo __METHOD__."\n"; 
    }
*/
}

$child = new Child();
$child->moreTesting();
