<?php
$str = "The quick brown fox jumped over the lazy dog.";
$checksum = crc32($str);
printf("%u\n", $checksum);
echo sprintf("%u", $checksum);
