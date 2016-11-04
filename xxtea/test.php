<?php 
$str = "1243";
var_dump($encode = base64_encode($str));
var_dump(base64_decode($encode));
