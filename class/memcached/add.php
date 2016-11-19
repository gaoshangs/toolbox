<?php
$memcached = new Memcached();
$memcached->addServer('127.0.0.1',11211) or die('could not connected');
$memcached->add('test', 'test value', 0);
$get_value = $memcached->get('test');
var_dump($get_value);
