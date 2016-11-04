<?php
echo "Starting \n";

$gmworker = new GearmanWorker();
$gmworker->addServer();
$gmworker->addFunction("reverse", "reverse_fn");
echo "waiting for job...\n";

while($gmworker->work()){
    if($gmworker->returnCode() != GEARMAN_SUCCESS){
        echo "return_code:". $gmworker->returnCode()."\n"; 
        break;
    }
}

function reverse_fn($job){
    $string = $job->workload();
    $res = strrev($string);
    echo "处理$string 结果为:$res\n";
    return  $res;
}
