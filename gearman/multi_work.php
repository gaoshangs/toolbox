<?php
echo "Starting \n";
$gmw = new GearmanWorker();
$gmw->addServer();
$gmw->addFunction("reverse","reverse_fn");
print "Waiting for job...\n";
while($gmw->work()){
    if($gmw->returnCode() !=GEARMAN_SUCCESS)
    {
        echo "Return_code:".$gmw->returnCode()."\n";
        break;
    }
}

function reverse_fn(GearmanJob $job)
{
    echo "Received job:".$job->handle()."\n";
    $workLoad = $job->workload();
    $workLoadSize = $job->workloadSize();
    echo "Workload:$workLoad($workLoadSize)\n";

    for($x=0;$x<$workLoadSize;$x++)
    {
        echo "Sending status:".($x+1)."/$workLoadSize complete \n";
        $job->sendStatus($x+1,$workLoadSize);
        $job->sendData(substr($workLoad,$x,1));
        sleep(1);
    }
    $result = strrev($workLoad);
    echo "Result:$result\n";
    return $result;
}