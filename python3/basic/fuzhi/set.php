<?php
    $a = [1,2,3];
    $b = $a;
    //$a[3] = 4;
    array_push($a, 4,5,6);
    print_r($a);
    print_r($b);
