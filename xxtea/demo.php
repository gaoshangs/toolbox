<?php
$str = "Hello World!";
$key = "1234567890";
$encrypt_data = xxtea_encrypt($str, $key);
file_put_contents('a.log', $encrypt_data);
$decrypt_data = xxtea_decrypt($encrypt_data, $key);
if ($str == $decrypt_data) {
    echo "success!";
} else {
    echo "fail!";
}


function encrypt($s,$key){
    return str_replace(array('+','/','='), array('~','-','_'), base64_encode(xxtea_encrypt($s, $key)));

}

function decrypt($e,$key){

    $c = str_replace(array('~','*','-','_'), array('+','+','/','='), $e);
    return $this->xxtea_decrypt(base64_decode($c), $key);
}
var_dump(encrypt($str, $key));
