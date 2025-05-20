<?php
//verificar se um numero e par ou impar
/*
    se par subtrair 2, se impar subtrair 1
    Simulando pessoas sentadas em mesas, pessoas na ponta pedem um vez, enquanto os demaus pedem 
    duas vezes, ou seja, o valor inserido dobrado menos as pessoas das pontas.
*/
$people = 0;
$qtdInput = 0;

while(true) {
    $qtdInput = trim(readLine());
    
    if ($qtdInput == 0){
        break;
    }

    for($i = 0, $n = $qtdInput; $i < $n; $i++){
        $people = trim(readLine());

        if ($people % 2 == 0)
            echo ($people * 2) - 2 . PHP_EOL;
        else    
            echo ($people * 2) - 1 . PHP_EOL;
    }
}