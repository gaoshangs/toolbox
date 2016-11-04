<?php
	$dsn = "mysql:host=127.0.0.1;dbname=test;charset=utf8";
	try{
		$dbh = new PDO($dsn,'root','123456',array(PDO::ATTR_ERRMODE=>PDO::ERRMODE_EXCEPTION));
		$sql = "SELECT * FROM token";
		$stmt = $dbh->query($sql);
		$res = $stmt->fetchAll(PDO::FETCH_ASSOC);
		print_r($res);
		$dbh = null;
	}catch(PDOException $e){
		die($e->getMessage());
	}
