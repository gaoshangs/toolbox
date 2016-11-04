<?php
    $pattern = "/[\x{4e00}-\x{9fa5}]+/u";
    $string = "abc哪, aa";
    var_dump(preg_match($pattern,$string));
