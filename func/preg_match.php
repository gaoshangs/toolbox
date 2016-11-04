<?php
    //$subject = "abbbbbbbbxxxyyybbb";
    $subject = "abbbbbbbb";
    //$pattern = "#^a.+b#";//默认贪婪模式
    //$pattern = "#^a.+?b#";//非贪婪模式
    //$pattern = "#^a.?b#U";//非贪婪模式
    $pattern = "#^a.??b#";//非贪婪模式
    preg_match($pattern, $subject, $matches);
    var_dump($matches);
