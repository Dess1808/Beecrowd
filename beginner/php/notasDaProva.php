<?php

class Nota{
    private $nota;

    public function __construct($nota){
        $this->nota = $nota;
    }

    public function letterNota(){
        if ($this->nota == 0)
            return 'E';
        elseif (($this->nota > 1) && ($this->nota <= 35))
            return 'D';
        elseif (($this->nota > 35) && ($this->nota <= 60))
            return 'C';
        elseif (($this->nota > 60) && ($this->nota <= 85))
            return 'B';
        elseif (($this->nota > 85) && ($this->nota <= 100))
            return 'A';   
    }
}

$nota = trim(readline());

$result = (new Nota($nota))->letterNota();
echo $result . PHP_EOL;
