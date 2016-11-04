<?php
// php-bloomd - Example basic usage script
require_once __DIR__ . "/PhpBloomd/BloomdClient.php";

// Establish a connection to a local bloomd with client
$bloomd = new PhpBloomd\BloomdClient("127.0.0.1", 8673);
// Create a filter
if (!$bloomd->createFilter("php"))
{
//    printf("example: failed to create filter\n");
//    exit;
}

// Create a filter object to use more concise, object-oriented interface
//$filter = $bloomd->filter("php");

// Set a couple of values in filter, using both BloomdClient and direct BloomFilter
// Either method may be used for all functions which accept a filter name as first parameter
$bloomd->set("php", "123");

// Check the filter for membership
var_dump($bloomd->check("php", "123"));
exit;
if ($bloomd->check("php", "123"))
{
    printf("example: got it!\n");
}
// Bulk set values
$results = $filter->bulk(array("foo", "bar", "baz"));
echo "Bulk\n";
var_dump($results);
foreach ($results as $k => $v)
{
    printf("%s -> %s\n", $k, $v ? "true" : "false");
}

// Multi check values
$results = $filter->multi(array("foo", "bar", "baz"));
echo "Multi\n";
var_dump($results);
foreach ($results as $k => $v)
{
    printf("%s -> %s\n", $k, $v ? "true" : "false");
}

// Check for any value in array
if ($filter->any(array("foo", "qux")))
{
    printf("any: yes!\n");
}

// Check for all values in array
if ($filter->all(array("foo", "bar", "baz")))
{
    printf("all: yes!\n");
}

// Drop filter
$filter->dropFilter();
