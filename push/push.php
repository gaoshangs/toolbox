<?php
$get_param = isset($_GET) ? $_GET : array();
$post_param = isset($_POST) ? $_POST : array();
$param = array_merge($get_param,$post_param);
$log = '';
$log.=date('Y-m-d H:i:s')." param:\n";
$log.=var_export($param,true)."\n";
$response = array(
	'response'=>array(
		'code'=>0,
		'msg'=>'success'	
	),
	'data'=>array(
		'task_id'=>1234
	)
);
//$log.="response_param:\n";
//$log.=var_export($response,true)."\n";
file_put_contents('/Data/tmp/www/push.log',$log,FILE_APPEND);
echo json_encode($response);exit;
//echo json_encode($param);exit;
//echo $log;
