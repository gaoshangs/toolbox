<?php
function foo(){
    include("a1.php");
    require("a2.php");
    a1();
    a2();
}

function boo(){
    a1();
    a2();
}

foo();
boo();
