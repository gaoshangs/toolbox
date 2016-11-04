<?php

class a {
    public static $a1=array("a1");

    public static function set($param){
        array_push(self::$a1, $param);
        var_dump(self::$a1);
        sleep(20);
    } 
}

a::set($argv[1]);
var_dump(a::$a1);
