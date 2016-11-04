<?php
	$dbms = 'mysql';
	$dbName = 'test';
	$host = '127.0.0.1';
	$userName = 'root';
	$password = '123456';
	try{
		$dsn = "$dbms:host=$host;dbname=$dbName";
		$dbh = new PDO($dsn,$userName,$password,array(PDO::ATTR_ERRMODE=>PDO::ERRMODE_EXCEPTION));
		$sql_1 = "select * from token where status=:status";
		$stmt = $dbh->prepare($sql_1);
		
		//bindParam
		$stmt->bindParam(':status',$status);
		$status=0;
		$stmt->execute();
		$res_1_1 = $stmt->fetchAll();
		print_r($res_1_1);

		//execute array()
		$stmt->execute(array(':status'=>1));
		$res_1_2 = $stmt->fetchAll();
		print_r($res_1_2);

		$sql_2 = "select * from  token where status= ? and deviceType= ?";
		$stat = $dbh->prepare($sql_2);
		$stat->execute(array(0,2));
		$res_2_1 = $stat->fetchAll(PDO::FETCH_ASSOC);
		print_r($res_2_1);

		$dbh = null;	
	}catch(PDOException $e){
		echo "Connection failed!\n";
		echo $e->getMessage()."\n";
	}	
