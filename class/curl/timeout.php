<?php
$ch = curl_init();
$param = array(
	CURLOPT_URL=>'http://www.toolbox.com/class/curl/test_timeout.php?a=b&c=d',
	//CURLOPT_RETURNTRANSFER => true,
	CURLOPT_HEADER => true,
	//CURLOPT_CONNECTTIMEOUT => 1,
	CURLOPT_TIMEOUT => 2,
);
curl_setopt_array($ch, $param);
//$res = curl_exec($ch);
curl_exec($ch);
$info = curl_getinfo($ch);
$curl_error = curl_error($ch);
$curl_no = curl_errno($ch); 
curl_close($ch);
var_dump($info,$curl_error,$curl_no);
