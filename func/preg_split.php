<?php
$reg = '#[^a-z\d]+#ui';
$subject = '  woshi,挣得 ,,,al123i,obc';
echo $subject."\n";
print_r($a = preg_split($reg, $subject));
print_r(array_filter($a));
