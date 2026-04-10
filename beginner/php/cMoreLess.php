<?php

/*
    recommend daily intake between 110 and 130 of vitamine C
*/

class FoodRichInVitanimeC {

    //orange juice
    protected function getOrangeJuiceMG(){
        return 120;
    }

    protected function getOrangeJuiceName(){
        return 'suco de laranja';
    }

    //Fresh strawberry
    protected function getFreshStrawberryMG(){
        return 85;
    }

    protected function getFreshStrawberryName(){
        return 'morango fresco';
    }

    //papaya
    protected function getPapayaMG(){
        return 85;
    }

    protected function getPapayaName(){
        return 'mamao';
    }

    //red guava
    protected function getRedGuavaMG(){
        return 70;
    }

    protected function getRedGuavaName(){
        return 'goiba vermelha';
    }

    //sleeve
    protected function getSleeveMG(){
        return 56;
    }

    protected function getSleeveName(){
        return 'manga';
    }

    //orange
    protected function getOrangeMG(){
        return 50;
    }

    protected function getOrangeName(){
        return 'laranja';
    }

    //Broccoli
    protected function getBroccoliMG(){
        return 34;
    }

    protected function getBroccoliName(){
        return 'brocolis';
    }
}

class DailyIntakeCalc extends FoodRichInVitanimeC {
    private $inputFoodDaily = [];

    public function __construct($inputFoodDaily = []){
        $this->inputFoodDaily = $inputFoodDaily;
    }

    //calc, to create function for classification to calc values of food
    public function getAvaliation(){
        $result = 0;

        foreach($this->inputFoodDaily as $key => $value){
            //Orange Juice
            if ($key == self::getOrangeJuiceName()){ 
                $result += $value * self::getOrangeJuiceMG();

            //freshStrarberry
            } elseif ($key == self::getFreshStrawberryMG()){ 
                $result += $value * self::getFreshStrawberryName();

            //papaya
            } elseif ($key == self::getPapayaName()){
                $result += $value * self::getPapayaMG();

            //red gauva
            } elseif ($key == self::getRedGuavaName()){
                $result += $value * self::getRedGuavaMG();

            //sleeve
            } elseif ($key == self::getSleeveName()){
                $result += $value * self::getSleeveMG();
            
            //Orange
            } elseif ($key == self::getOrangeName()){
                $result += $value * self::getOrangeMG();
            
            //broccoli
            } elseif ($key == self::getBroccoliName()){
                $result += $value * self::getBroccoliMG();
            }
        }

        //daily intake range 110 - 130 
        if ($result < 110){
            return "Mais " . $result = 110 - $result . " mg"; 
        } elseif ($result > 130){
            return "Menos " . $result = $result - 130 . " mg";
        } else {
            return $result . " mg";
        }
    }
    
}

//main
$inputFoodDaily = [];

//input
while(1){
    $inputQTD = trim(readline());

    if ($inputQTD > 0){
        for ($i = 0; $i<$inputQTD; $i++){
            //input string
            $dailyIntake = trim(readLine());

            //convert string to array
            $inputArray = explode(' ', $dailyIntake);
            $amout = $inputArray[0];
            $food = implode(' ', array_slice($inputArray, 1));

            //organizating array
            $inputFoodDaily[$food] = $amout; 
        }

        //inicialization object
        echo ((new DailyIntakeCalc($inputFoodDaily)))->getAvaliation() . PHP_EOL;

        //rest array
        $inputFoodDaily = [];
    } else {
        break;
    }
}




