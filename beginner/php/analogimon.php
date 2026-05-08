<?php 
//estudar tecnica de buscar por menor caminho - bucar em largura adaptada para array multdimensional

while(($dimesions = trim(fgets(STDIN)))){
    [$column, $row] = explode(" ", $dimesions);


    $matrix = [];

    //input map and map multidimension
    for ($i = 0; $i < $column; $i++){
        $inputRow = trim(fgets(STDIN));
        $matrix[] = explode(" ", $inputRow);
    }

    //default variables e reset
    $indexColumnOne = null;
    $indexRowOne = null;
    $indexColumnTwo = null;
    $indexRowTwo = null;

    //1
    foreach($matrix as $indexColumn => $ArrayRow){
        foreach($ArrayRow as $indexRow => $valueRow){
            //1
            if ($matrix[$indexColumn][$indexRow] == 1){
                $indexColumnOne = $indexColumn+1;
                $indexRowOne = $indexRow+1;
            //2
            } else if ($matrix[$indexColumn][$indexRow] == 2){
                $indexColumnTwo = $indexColumn+1;
                $indexRowTwo = $indexRow+1;
            }
        }
    
        //found all
        if ($indexColumnOne & $indexRowOne & $indexColumnTwo & $indexRowTwo)
            break; 
    }
    
    //output
    echo (abs(($indexColumnOne - $indexColumnTwo)) + abs(($indexRowOne - $indexRowTwo))) . PHP_EOL;
}






