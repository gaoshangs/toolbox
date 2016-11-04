<?php
function foo($callback){
    #do someting by foo
    $a = "这里是foo处理了很长时间才得到的结果\n";
    $callback($a);
}
function fun1($a){
    echo "我是fun1，我利用foo的结果可以处理很多的东西\n";
    echo $a;
}

function fun2($a){
    echo "我是fun2，我利用foo的结果也可以处理很多的东西\n";
    echo $a;
}

foo('fun1');
foo('fun2');

#匿名
foo(function($a){
    echo "我是匿名函数，我利用foo直接处理结果，是不是代码简洁了很多\n";
    echo $a;
});
