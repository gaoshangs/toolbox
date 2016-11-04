<?php
$dsn = "mysql:host=127.0.0.1;dbname=test";
$dbh = new PDO($dsn,'root','123456',array(PDO::ATTR_ERRMODE=>PDO::ERRMODE_EXCEPTION));
$sql = "INSERT INTO text( text ) VALUES(:text)";
$stmt = $dbh->prepare($sql);
var_dump($stmt->execute(array(':text'=>'fuck it')));
echo $dbh->lastinsertId();


