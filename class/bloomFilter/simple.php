<?php
function bloom($param){
  $set = array(1,2,3,4,5);
  $bitMap = array(0,0,0,0,0,0,0,0,0);
  foreach($set as $v){
  	$bitMap[$v] = 1;
  }
  print_r($bitMap);
  echo isset($bitMap[$param]) && $bitMap[$param] == 1 ? 'Find it' : 'Not exist'; 
}
bloom($argv[1]);
