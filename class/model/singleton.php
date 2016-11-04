<?php
//Singleton model
class SingleTon{
    public static $_instance = null;
    protected $arr = array();
    private $path;
    final private function __construct($path){
        $this->path = $path;
    }

    public static function getInstance($path){
        if(!(self::$_instance instanceof self)){
           self::$_instance = new self($path); 
        }
        return self::$_instance;
    }

    public function getPath(){
        return $this->path; 
    }
    public function setArr($key, $val){
        $this->arr[$key] =  $val;
    }

    public function getArr(){
        return $this->arr;
    }
}

$ins1= SingleTon::getInstance(__DIR__);
$ins1->setArr('k1', 'v1');
$ins1->setArr('k2', 'v2');
var_dump($ins1->getPath());
var_dump($ins1->getArr());

$ins2= SingleTon::getInstance('/Data/code');
var_dump($ins1->getPath());
var_dump($ins2->getArr());
