<?php
echo "Starting \n";
$gmWorker = new GearmanWorker();
$gmWorker->addServer();
$gmWorker->addFunction("reverse","reverse_fn");
print "Waiting for job ....\n";

while($gmWorker->work()){
    if($gmWorker->returnCode() !=GEARMAN_SUCCESS)
    {
        echo "return_code: ".$gmWorker->returnCode()."\n";
        break;
    }
}

function reverse_fn($job){
    echo "Received job:".$job->handle()."\n";
    $workLoad = $job->workload();
    $workLoadSize = $job->workloadsize();
    echo "Workload:$workLoad($workLoadSize)\n";
    for($x= 0;$x<$workLoadSize;$x++){
        echo "Sending status:".($x+1)."/$workLoadSize complete\n";
        $job->sendStatus($x,$workLoadSize);
        sleep(1);
    }
    $result = strrev($workLoad);
    echo "Result:$result \n";
    return $result;
}

function reverse_fast_fn($job){
    return strrev($job->workload());
}