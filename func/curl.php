<?php
function curlRequest($url,$request_data=array(),$request_type=''){
		$data = false;
		$ch = curl_init();
		//curl_setopt($ch,CURLOPT_HEADER,1);
		curl_setopt($ch,CURLOPT_RETURNTRANSFER,1);
		if(empty($request_type) || strtoupper($request_type) == 'GET'){
			$url = trim($url,'?').'?'.http_build_query($request_data);
			curl_setopt($ch,CURLOPT_URL,$url);
		}else{
			curl_setopt($ch,CURLOPT_URL,$url);
			curl_setopt($ch,CURLOPT_POST,1);
			curl_setopt($ch,CURLOPT_POSTFIELDS,$request_data);
		}
		if(!curl_errno($ch)){
			$data = curl_exec($ch);
		}
		$info = curl_getinfo($ch);
		curl_close($ch);
		return array(
			'data'=>$data,
//			'info'=>$info
			);
	}
//$res = curlRequest('www.toolbox.com/push/work.php',array('a'=>'b','c'=>'d'),'POST');
$res = curlRequest('http://seq.workt.com/seq_number',array('biz'=>1, 'ins'=>1),'GET');
print_r($res);

