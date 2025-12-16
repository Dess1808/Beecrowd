<?php

//input
$message = trim(readLine());
$arrayMessage = str_split($message);

$total = 0;

foreach($arrayMessage as $digit){
    $total += $digit;
}

if (($total % 2) != 0) {
    array_push($arrayMessage, '1');
} else {
    array_push($arrayMessage, '0');
}

$message = implode($arrayMessage);
echo $message . PHP_EOL;


