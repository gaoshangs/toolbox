<?php
$binarydata = pack("nvc*", 0x1234, 0x5678, 65, 66);
var_dump($binarydata);
var_dump(pack("C*",80,72,80,100));
var_dump(pack('C',0));
