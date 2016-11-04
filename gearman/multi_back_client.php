<?php
$gmc = new GearmanClient();
$gmc->addServer();
$gmc->setCreatedCallback("reverse_created");
$gmc->setDataCallback("reverse_data");
$gmc->setStatusCallback("reverse_status");
$gmc->setCompleteCallback("reverse_complete");
$gmc->setFailCallback("reverse_fail");
$data['foo'] = 'bar';
$task = $gmc->addTaskBackground("reverse","foo",$data);
$task2 = $gmc->addTaskLowBackground("reverse","bar",null);
$res = $gmc->runTasks();
var_dump($res);
if(!$res)
{
    echo "ERROR".$gmc->error()."\n";
    exit;
}
echo "DONE...\n";

function reverse_created(GearmanTask $task)
{
    echo "CREATED: ".$task->jobHandle()."\n";
}

function reverse_status(GearmanTask $task)
{
    echo "STATUS :".$task->jobHandle()."-".$task->taskNumerator()."\n";
}
function reverse_complete(GearmanTask $task)
{
    echo "COMPLETE:".$task->jobHandle().",".$task->data()."\n";
}
function reverse_fail(GearmanTask $task)
{
    echo "FAILED:".$task->jobHandle()."\n";
}

function reverse_data(GearmanTask $task)
{
    echo "DATA:".$task->data()."\n";
}


