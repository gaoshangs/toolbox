<?php
try{
    $dbhd1 = new PDO("mysql:host=127.0.0.1;dbname=push", "root", "root", array(PDO::ATTR_PERSISTENT=>true));
    $dbhd2 = new PDO("mysql:host=127.0.0.1;dbname=push", "root", "root", array(PDO::ATTR_PERSISTENT=>true));
   //$dbhd1 = null;
}catch(PDOException $e){
    die($e->getMessage());
}
    sleep(30);
