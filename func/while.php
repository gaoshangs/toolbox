<?php
function run($time = 6){
    do{
        echo "keep time:".$time."\n";
        if($time == 4){
            break;
        }
        $time--;
    }while($time);
    
    return $time;
}

var_dump(run());
