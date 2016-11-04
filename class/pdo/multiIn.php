<?php
function getTime(){
    list($mic,$sec) = explode(' ', microtime());
    return $sec + $mic;
}

function formatTime($sec){
    $suffix = "s";
    if($sec > 60){
        $time = $sec /60; 
        $suffix = "min";
    }else{
        $time = $sec; 
    }
    return sprintf("运行时间：%.4lf".$suffix,$time);
}

function add($dbh, $j){
    $sql = "INSERT INTO token(did,token) VALUES";
    for($i = 0; $i<10000; $i++){
        $token = md5(microtime().mt_rand().$j.$i);
        $sql.="('".substr($token,0,10)."', '$token'),";
    }
    $sql = trim($sql, ",");
    $dbh->query($sql);
}

$begin = getTime();
$dsn = "mysql:host=127.0.0.1;dbname=lala";
$dbh = new PDO($dsn,'root','123456',array(PDO::ATTR_ERRMODE=>PDO::ERRMODE_EXCEPTION));

for($j=0; $j<100;$j++){
    add($dbh, $j);
}
$dbh = null;
$end = getTime();
echo formatTime($end - $begin);
