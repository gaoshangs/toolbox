<?php
$gmc = new GearmanClient();
$gmc->addServer("127.0.0.1", 4730);
$gmc->addTaskBackground("reverse", "hello world");
$gmc->addTaskBackground("reverse", "hello gason");
var_dump($gmc->runTasks());

$gmc->addTaskBackground("reverse", "iphone one");
$gmc->addTaskBackground("reverse", "iphone two");
var_dump($gmc->runTasks());
