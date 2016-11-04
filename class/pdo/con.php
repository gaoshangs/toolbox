<?php
try{
    $dbhd1 = new PDO("mysql:host=127.0.0.1;dbname=push", "root", "root", array(PDO::ATTR_PERSISTENT=>true));
    $dbhd2 = new PDO("mysql:host=127.0.0.1;dbname=push", "root", "root", array(PDO::ATTR_PERSISTENT=>true));
    /*
    $dbhd1 = new PDO("mysql:host=127.0.0.1;dbname=push", "root", "root");
    $dbhd2 = new PDO("mysql:host=127.0.0.1;dbname=push", "root", "root");
    $dbhd3 = new PDO("mysql:host=127.0.0.1;dbname=push", "root", "root");
    $dbhd4 = new PDO("mysql:host=127.0.0.1;dbname=push", "root", "root");
    */
   // echo "connect success\n";
   // $sql = "SELECT * FROM tab1 limit 3";
   // $stmt = $dbhd->query($sql);
   // $res = $stmt->fetchAll();
   // var_dump($res);
   //$dbhd1 = null;

}catch(PDOException $e){
    die($e->getMessage());
}
    sleep(30);

