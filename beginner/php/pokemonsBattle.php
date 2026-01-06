<?php

$repetitions = trim(readLine());

for ($i = 0; $i < $repetitions; $i++){
    $bonus = trim(readLine());
    $dabriel = trim(readLine());
    $guarte = trim(readLine()); 

    //dabriel
    [$dabrielAttack, $dabrielDefense, $dabrielLevelMaster] = explode(" ", $dabriel);

    //guarte
    [$guarteAttack, $guarteDefense, $guarteLevelMaster] = explode(" ", $guarte);

    //calc
    $playeDabriel = ($dabrielAttack + $dabrielDefense) / 2;
    $playeGuarte = ($guarteAttack + $guarteDefense) / 2;

    ($dabrielLevelMaster % 2) == 0 ? $playeDabriel += $bonus : null;
    ($guarteLevelMaster % 2) == 0 ? $playeGuarte += $bonus : null;


    //ouptut
    if ($playeDabriel > $playeGuarte)
        echo "Dabriel" . PHP_EOL;
    elseif ($playeDabriel < $playeGuarte)
        echo "Guarte" . PHP_EOL;
    else 
        echo "Empate" . PHP_EOL;
}

