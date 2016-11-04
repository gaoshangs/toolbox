<?php
$path = dirname(__DIR__);
$handle = opendir($path);
while($file = readdir($handle)){
    echo $file."\n";
}
closedir($handle);
