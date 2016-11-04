<?php
ini_set('memory_limit', '256M');
$a = [];
for($i=0; $i<1000000; $i++){
    $a[$i] = mt_rand().$i;
}
$data = "<?php \n".var_export($a, true).";";
file_put_contents('a', $data);
