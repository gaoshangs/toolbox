<?php
$dsn = "mysql:host=127.0.0.1;dbname=push;charset=utf8";
$dbh = new PDO($dsn,'root','root');
$sql = "update tab1 set score=12 where id=22";
$statment = $dbh->prepare($sql);
var_dump($statment->execute());
