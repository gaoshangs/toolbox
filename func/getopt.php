<?php
//php getopt.php -h -f"lala" -p"oo" --opt --required="ooss" --optional="tr" 
$shortopts = "";
$shortopts .= "h";
$shortopts .= "f:";
$shortopts .= "p::";

$longopts = array(
    "opt",
    "required:",
    "optional::"
);
$options = getopt($shortopts, $longopts);
var_dump($options);
