<?php
//stripos() - first occurrence
$input = 0;
$space = 0;
$n1 = 0;
$n2 = 0;
$countBills = 0;

while(true){
    $input = trim(readLine());
    
    //space localization
    $space = stripos($input, " ") . PHP_EOL;

    //organization
    $n1 = substr($input, 0, $space);
    $n2 = substr($input, $space + 1);

    //n1 = 0, n2 = 0?
    if ($n1 == 0 && $n2 == 0){
        break;
    } else {
        $change = $n2 - $n1;
        //verficiar calculo de troco, preciso criar um mecanismo de dupla ação
        //dois casos, para a notas validas, e para outros valores
        //o problema aparentemente agrada mesmas notas, que e estranhho pos o enuciado nã informa isso
        //no e enuciando, e valido somente notas "diferente" e não "mesma nota"
        
        //especial cases
        switch($change){
            case 100: //duas notas de 50
                $countBills = 2;
                break;
            case 20: //duas notas de 10
                $countBills = 2;
                break;
            case 10: //duas notas de 5
                $countBills = 2;
                break;
        }

        //it is not special cases
        if ($countBills !== 2){
            //current cases
            while($change >= 100){
                $change -= 100;
                $countBills++;
            }

            while($change >= 50){
                $change -= 50;
                $countBills++;
            }

            while($change >= 20){
                $change -= 20;
                $countBills++;
            }

            while($change >= 10){
                $change -= 10;
                $countBills++;
            }

            while($change >= 5){
                $change -= 5;
                $countBills++;
            }

            while($change >= 2){
                $change -= 2;
                $countBills++;
            }
        }
        
        //output - countBills control
        if ($countBills !== 2){
            echo "impossible" . PHP_EOL;
        } else {
            echo "possible" . PHP_EOL;
        }
    }  

    //reset variables
    $space = 0;
    $n1 = 0;
    $n2 = 0;
    $countBills = 0;
}

//dividir e testar por noas 
//notas available: 2, 5, 10, 20, 50 e 100
//faz mais sentido fazer um switch case, ou um foreach
//possibilidades
/*
    2, 5, 10, 20, 50, e 100
    12, 15, 22, 25, 52, 55, 150, 120, 110, 105 e 102
*/

