<?php
echo "Starting \n";
$gmWorker = new GearmanWorker();
$gmWorker->addServer();
$gmWorker->addFunction("reverse","reverse_fn_fast");
print "Waiting for job...\n";
while($gmWorker->work()){
    if($gmWorker->returnCode() !=GEARMAN_SUCCESS){
        echo "return_code:".$gmWorker->returnCode()."\n";
        break;
    }
}
function reverse_fn(GearmanJob $job){
    echo "Received job:".$job->handle()."\n";
    $workload = $job->workload();
    $workload_size = $job->workloadSize();
    echo "Workload:$workload($workload_size)\n";
    for($x=0;$x<$workload_size;$x++){
        echo "Sending status:".($x+1)."/$workload_size complete\n";
        $job->sendStatus($x,$workload_size);
        sleep(1);
    }
    $result = strrev($workload);
    echo "Result:$result\n";
    return $result;
}

function reverse_fn_fast(GearmanJob $job){
    $string = $job->workload();
    echo "$string conver to :".strrev($string)."\n";
    return false;
}
