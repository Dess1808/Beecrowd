<?php

while($alphabetic = trim(fgets(STDIN))){
    //input trash for php 
    $qtd = trim(fgets(STDIN));
    $indexOrder = explode(" ", trim(fgets(STDIN)));

    foreach($indexOrder as $key => $value){
        echo $alphabetic[(int)$value-1];
    }

    echo PHP_EOL;    

    //resete variables
    $alphabetic = null;
    $qtd = null;
    $indexOrder = [];
}