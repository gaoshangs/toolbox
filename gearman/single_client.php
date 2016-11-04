<?php
//单请求
$gmClient = new GearmanClient();
$gmClient->addServer();
echo "sending job \n";
do{
    $result = $gmClient->doNormal("reverse","Hello!");
    switch($gmClient->returnCode()){
        case GEARMAN_WORK_DATA:
            echo "Data:$result\n";
            break;
        case GEARMAN_WORK_STATUS:
            list($numerator,$denominator) = $gmClient->doStatus();
            echo "Status:$numerator/$denominator complete\n";
            break;
        case GEARMAN_WORK_FAIL:
            echo "Failed \n";
            exit;
        case GEARMAN_SUCCESS:
            echo "Success:$result \n";
            break;
        default:
            echo "RET:".$gmClient->returnCode()."\n";
            exit;
    }
}while($gmClient->returnCode() != GEARMAN_SUCCESS);