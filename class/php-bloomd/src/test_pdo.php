<?php

function test() {
$dsn = "mysql:host=127.0.0.1;dbname=lala";
$opts = array(PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION, PDO::ATTR_PERSISTENT => false);
$link = new PDO($dsn, 'root', 123456, $opts);
echo "New Object.\n";
sleep(10);

$sql = 'SELECT * FROM `apps`';
$exec = $link->query($sql);
echo "Query.\n";
}

test();
echo "OK\n";
sleep(30);
exit();

$apps = array();
$tmp_apps = $exec->fetchAll(PDO::FETCH_ASSOC);
print_r($tmp_apps);
