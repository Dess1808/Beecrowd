<?php

//continuar verificando... alguns bug no codigo, problema em caso especifico

while ($values = trim(readLine())) {

    [$x1, $y1, $x2, $y2, $v1, $r1, $r2] = explode(" ", $values);

    //diferenca pontos plano cartesiano
    $differencePoints = (double) sqrt(pow($x2 - $x1, 2) + pow($y2 - $y1, 2));

    //velocidade, 1 metro por segundo????
    $invadorDistance = (double) $differencePoints + 1.5 * (double) $v1;
    $fiddlesticksDistance = (double) $r1 + $r2;
    
    if ($fiddlesticksDistance < $invadorDistance){
        echo 'N' . PHP_EOL;
    } else {
        echo 'Y' . PHP_EOL;
    }
}









