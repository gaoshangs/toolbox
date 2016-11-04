<?php
$a = array(
'a','b','c','d','e','f','d',
);
foreach($a as $v){
 if($v != 'c')
	continue;
 echo $v."\n";
break;
}
echo '555555';
