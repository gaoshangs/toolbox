<?php
$title = "My Amazing PHP Script";
$pid = getmypid(); // you can use this to see your process title in ps

if (!cli_set_process_title($title)) {
    echo "Unable to set process title for PID $pid...\n";
    exit(1);
} else {
    echo "The process title '$title' for PID $pid has been set for your process!\n";
    sleep(5);
}