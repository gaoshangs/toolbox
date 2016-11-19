<?php
$a = ['a','b','c','d'];
for($i=0;$i<10;$i++){
    foreach($a as $k=>$v){
        echo '===='.$k."\n";
        if($k == $i){
            break; 
        }
    }
    echo '++++'.$i."\n";
}
