<?php
/*
    solucao: todas tentativas / todos os acertos * 100
*/

class Player {
    private $name;
    private $attemps = [];
    private $success = [];

    function __construct($name, $attemps, $success){
        $this->name = $name;
        $this->attemps = $attemps;
        $this->success = $success;
    }

    //get

    //get name
    public function getNamePlayer() {
        return $this->name;
    }

    ///gets attemps
    public function getAttempsService(){
        return $this->attemps[0];
    }

    public function getAttempsBlock(){
        return $this->attemps[1];
    }

    public function getAttempsAttack(){
        return $this->attemps[2];
    }

    //gets success
    public function getSuccessService(){
        return $this->success[0];
    }

    public function getSuccessBlock(){
        return $this->success[1];
    }

    public function getSuccessAttack(){
        return $this->success[2];
    }
}

//main
//input
$count = trim(readLine());

// variables inicialization
$servicesSumSuccessAll = 0;
$blocksSumSuccessAll = 0;
$attackSumSuccessAll = 0;
$servicesSumAttempsAll = 0;
$blocksSumAttempsAll = 0;
$attacksSumAttempsAll = 0;

//run loop
for ($i = 0; $i<$count; $i++) {
    //input
    $name = trim(readLine());
    $attempsString = trim(readLine());
    $successString = trim(readLine());
    //separare
    $attemps = explode(' ', $attempsString);
    $success = explode(' ', $successString);

    //instance obj
    $player = new Player($name, $attemps, $success);

    //rules
    //sum all success
    $servicesSumSuccessAll += $player->getSuccessService();
    $blocksSumSuccessAll += $player->getSuccessBlock(); 
    $attackSumSuccessAll += $player->getSuccessAttack();

    //sum all attemps
    $servicesSumAttempsAll += $player->getAttempsService();
    $blocksSumAttempsAll += $player->getAttempsBlock();
    $attacksSumAttempsAll += $player->getAttempsAttack();
}

//output
echo "Pontos de Saque: " . 
sprintf("%.2f", ($servicesSumSuccessAll / $servicesSumAttempsAll) * 100) . " %." . PHP_EOL;

echo "Pontos de Bloqueio: " . 
sprintf("%.2f", ($blocksSumSuccessAll / $blocksSumAttempsAll) * 100 ). " %." . PHP_EOL;

echo "Pontos de Ataque: " . 
sprintf("%.2f", ($attackSumSuccessAll / $attacksSumAttempsAll) * 100) . " %." . PHP_EOL;



