<?php

/*
    calcu logic: retirar maior e menor valor, soma o valores restando, obtendo um valor total 
    o resultado e a multiplicação do jumps'score com o valor restante total

    withoutHighestLowest()
    max() for the highest and min() for the lowest
    array_diff() to remove especific value and array_values() for re-index array, 
*/

class Diver {
    private $name;
    private $jumpScore;
    private $judgesScore = [];

    public function __construct($name, $jumpScore, $judgesScore){
        $this->name = $name;
        $this->jumpScore = $jumpScore;
        $this->judgesScore = $judgesScore;
    }

    //gets
    //get name
    public function getName(){
        return $this->name;
    }

    //highest and lowest
    public function withoutHighestLowest(){
        //getting values
        $highest = max($this->judgesScore);
        $lowest = min($this->judgesScore);

        //remove highest and lowest from judgeScores
        $wHighest = array_diff($this->judgesScore, array($highest));
        $resultScores = array_diff($wHighest, array($lowest));

        return $resultScores;
    }

    //final score 
    public function scoreFinal(){
        $sumAll = array_sum(self::withoutHighestLowest());
        $resultScore = $sumAll * $this->jumpScore;

        return $resultScore;
    }
}

//main

//input count loop
$count = trim(readLine());

for($i = 0; $i<$count; $i++) {
    //input value and separating
    $name = trim(readLine());
    $jumpScore = trim(readLine());
    $judgesScoreString = trim(readLine());
    $judgesScore = explode(' ', $judgesScoreString);

    //initiazation instance
    $diver = new Diver($name, $jumpScore, $judgesScore);

    //get results
    $resultScores[$diver->getName()] = $diver->scoreFinal();
}

//output
foreach($resultScores as $name => $score){
    echo $name . " " . sprintf("%.2f", $score) . PHP_EOL;
}

