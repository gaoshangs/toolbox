<?php
$dbms='mysql';
$host='localhost';
$dbName='push';
$user='root';
$pass='root';
$dsn="$dbms:host=$host;dbname=$dbName;charset=utf8";
try{
	$dbh = new PDO($dsn,$user,$pass);
	echo "连接成功\n";
	$sql = "SELECT * FROM token";
//	foreach($dbh->query($sql) as $row){
//		print_r($row);
//	}
	$stmt = $dbh->query($sql);
	$res =  $stmt->fetchAll();
	var_dump($res);
	//$stmt->closeCursor();
	//$stmt = null;
	//$dbh = null;
	//sleep(60);
}catch(PDOException $e){
	die("Error:" . $e->getMessage()."\n");
}
