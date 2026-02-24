<?php
/*
    problema: calcular isolado o Statistics de cada palyer (tentativa - acerto)
    finalizar calculando statistics total do jogadores

    porcentagem calculo core: (acertos / tentativas) * 100 

    obs: pesquisar calculo geral do time
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

    //get name
    public function getNamePlayer() {
        return $this->name;
    }

    //calc
    public function getStatisticPlayer(){
        $servicePercent = ($this->success[0] / $this->attemps[0]) * 100;
        $blockPercent = ($this->success[1] / $this->attemps[1]) * 100;
        $attackPercent = ($this->success[2] / $this->attemps[2]) * 100;

        $statistic['service'] = $servicePercent;
        $statistic['block'] = $blockPercent;
        $statistic['attack'] = $attackPercent;

        return $statistic;
    }    
}

//input
$name = trim(readLine());
$attempsString = trim(readLine());
$successString = trim(readLine());

//separare
$attemps = explode(' ', $attempsString);
$success = explode(' ', $successString);


//refatorar, colocar para multiplas entradas!!

//obj
$player1 = new Player($name, $attemps, $success);
$statisticOfPlayer = $player1->getStatisticPlayer();

//output
echo "Player {$player1->getNamePlayer()}" . PHP_EOL . 
"Service = {$statisticOfPlayer['service']} %" . PHP_EOL . 
"Block = {$statisticOfPlayer['block']} %" . PHP_EOL . 
"Attack = {$statisticOfPlayer['attack']} %" . PHP_EOL;



