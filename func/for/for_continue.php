<?php
function checkEmpty($req_param){
    $res = array(
        'status'=>200,
        'msg'=>''
    );
    foreach ($req_param as $key => $param) {
        if (empty($param)) {
            $res['status'] = 400;
            $res['msg'] = array(
                'code' => 400,
                'msg' => 'Bad Argument: The ' . $key . '\'s value is empty',
                'req_param' => $req_param,
            );
            break;
        }
    }
    return $res;
}
$a = array('aaa','bb','t'=>0,'x'=>'q234');
print_r(checkEmpty($a));
