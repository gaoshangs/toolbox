<?php
$ident = 'test';
$facility = LOG_LOCAL4;
$priority = LOG_NOTICE;
openlog($ident,LOG_CONS,$facility);
syslog($priority,'syslog test message generated in php programs');
closelog();
