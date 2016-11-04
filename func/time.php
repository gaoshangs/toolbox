<?php
function getTime(){
    list($msec, $sec) = explode(' ', microtime());
    return ($sec+$msec);
}
