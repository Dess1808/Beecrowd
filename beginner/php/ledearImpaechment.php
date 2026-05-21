<?php

while($nVotes = trim(fgets(STDIN))){
    //input
    $votes = trim(fgets(STDIN));
    $arrayVotes = explode(" ", $votes);

    $sum = array_sum($arrayVotes);

    if ($sum >= ($nVotes/2) + 2){
        echo "impeachment" . PHP_EOL;
    } else {
        echo "acusacao arquivada" . PHP_EOL;
    }

    //reset
    $votes = null;
    $arrayVotes = null;
    $sum = null;
}