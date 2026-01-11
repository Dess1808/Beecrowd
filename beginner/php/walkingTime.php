<?php 

//input
$years = trim(readLine());
[$y1, $y2, $y3] = explode(" ", $years);

$isPossibleGoBack = [];

//three travels
($y1 + $y2) == $y3 || ($y1 + $y3) == $y2 || ($y2 + $y3) == $y1 ? $isPossibleGoBack[] = "S" : $isPossibleGoBack[] = "N" ;

//two travels
($y1 - $y2) == 0 || ($y1 - $y3) == 0 || ($y2 - $y3) == 0 ? $isPossibleGoBack[] = "S" : $isPossibleGoBack[] = "N" ;

//output
foreach($isPossibleGoBack as $sOrN){
    if ($sOrN == "S"){
        echo "S" . PHP_EOL;
        exit();
    }
}

//without possible go back
echo "N" . PHP_EOL;