<?php
unset($argv[0]);
foreach($argv as $v){
  var_dump(sha1($v));
}
