<?php

while(($inputQN = trim(fgets(STDIN)))){
    [$gradeOfCitizens, $rank] = explode(" ", $inputQN);

    //inputs
    //input grades of citizens
    $gradeArray = [];
    for ($i = 0; $i < $gradeOfCitizens; $i++){
        $gradeArray[] = trim(fgets(STDIN));
    }

    //input rank
    $rankArray = [];
    for ($i = 0; $i < $rank; $i++){
        $rankArray[] = trim(fgets(STDIN)); 
    }

    //sorted grades
    rsort($gradeArray);

    //output
    for($i = 0, $n = count($rankArray); $i < $n; $i++){
        echo $gradeArray[$rankArray[$i]-1] . PHP_EOL;
    }

    //resete variables
    $inputQN = null;
}