<?php
$get_param = isset($_GET) ? $_GET : array();
$post_param = isset($_POST) ? $_POST : array();
$param = array_merge($get_param,$post_param);
$log = '';
$log.=date('Y-m-d H:i:s')." param:\n";
$log.=var_export($param,true)."\n";
file_put_contents('/Data/tmp/www/reg.log',$log,FILE_APPEND);
class reg{
	public $result = 1;
	public $data = array(
		'gdid'=>'8PQdv5M12Z2Glv2bxIVmyRxT'		
	);
}
$reg = new reg();
echo json_encode($reg);exit;
