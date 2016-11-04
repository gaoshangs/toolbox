<?php
$gmClient = new GearmanClient();
$gmClient->addServer();
$job_handle = $gmClient->doBackground("reverse","this is a test");
$job_handle = $gmClient->doBackground("reverse","this is a test");
$job_handle = $gmClient->doBackground("reverse","this is a test");
$job_handle = $gmClient->doBackground("reverse","this is a test");
var_dump(GEARMAN_SUCCESS);
var_dump($gmClient->returnCode());
if($gmClient->returnCode() !=GEARMAN_SUCCESS){
    echo "bad return code \n";
    exit;
}
echo "done!\n";
