<?php

while(true){
    //input
    $entrys = trim(readline());
    $arrayEntrys = explode(" ", $entrys);

    //divide
    $multi = $arrayEntrys[0];
    $xp = $arrayEntrys[1];

    //test
    if ($multi == 0 && $xp == 0) {
        break;
    }
    else {
        echo $multi * $xp . PHP_EOL;
    }
}






