<?php
//versio 2 - definitiva

/**
* hiposte 2: pegar o primeiro + a cauda do palavra buscanda na string
*/

//controle variavel
$n1 = 0;
$n2 = 0; 
$subsequence = 0;
$case = 0;
$lastPosition = 0;

//EOF - uma tecnica diferente
while($n1 = trim(readLine())){
    $n2 = trim(readLine());

    //start count case
    $case++;

    $lengthN1 = strlen($n1);

    //comparation
    for ($numPosition = 0, $n = strlen($n2); $numPosition < $n; $numPosition++){
        //extraindo palavra
        $extractWord = substr($n2, $numPosition, $lengthN1);
        
        //test
        if ($extractWord === $n1){
            $subsequence += 1;
            $lastPosition = $numPosition + 1;
        }
    }

    //output
    echo "Caso #$case:" . PHP_EOL;
    
    if ($subsequence > 0){
        echo "Qtd.Subsequencias: $subsequence" . PHP_EOL;
        echo "Pos: $lastPosition" . PHP_EOL;
    } else {
        echo "Nao existe subsequencia" . PHP_EOL;
    }

    //newline 
    echo PHP_EOL;

    //reset counts variables
    $subsequence = 0;
    $wordTest = 0;
    $lastPosition = 0;
}