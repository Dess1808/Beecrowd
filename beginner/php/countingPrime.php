<?php

$n = trim(readline());

//minimun value
$min = $n / log($n);

//max value
$max = 1.25506 * ($min); //same value

//bug, falta o zero
echo round($min, 1) . ' ' . round($max, 1) . PHP_EOL;