<?php
$a = array('');
$b = 0;
if(!in_array($b,$a,true)){
   echo 'Not find';
}else{
   echo 'get it';
}
echo "\n";
$a = null;
$b = array(1,2,3,4);
var_dump(in_array($a,$b));
