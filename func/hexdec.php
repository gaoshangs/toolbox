<?php
unset($argv[0]);
foreach($argv as $v){
  var_dump(hexdec($v));
}
