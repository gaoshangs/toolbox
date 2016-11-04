<?php
$pattern ="/[\x{4e00}-\x{9fa5}A-Za-z0-9]+/u";
$string = "我是12,阿斯_顿0-飞，a，b,c。d也’许@是‘可以的";
preg_match_all($pattern, $string, $matches);
print_r($matches);
