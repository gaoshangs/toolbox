<?php
// Create our client object
$client= new GearmanClient();

// Add available and unavailable servers
$client->addServers('127.0.0.1:4730');

// Test all job servers
$success = @$client->ping('data testing');
if (!$success) {
    die('Error: ' . $client->error());
}

// Sending job
echo 'Test ok';
//echo $client->doNormal('reverse', 'Hello World!');
