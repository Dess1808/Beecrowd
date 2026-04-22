<?php
//substituição de caracter em string
//teste fsfsdfds
/*
    one class (Operation)
    lot of methods 

    DRY - don't repeat yoursel

    input checks
    //obs: a primeira expressão preciso encontrar o unico espaco em branco e alterar para o simbolo
    da "operação"

    //obs: a respota deve ser dividida nas partes "nome", "seleção da operação" e "simbolo operação"

    //ob: basta utilizar o str_spli e explode para tratar os dados de entrada
*/

class Operation {
    private $name;
    private $op;
    private $resultExpected;
    private $choice;
    private $winnerOrNot = [];
    private $expressions = [];
    
    public function __constructor($expressions, $answers){
        
        foreach($answers as $answer){
            //answer's organization
            $this->name = $answer['name'];
            $this->op = $answer['op'];
            $this->choice = $answer['choice'];
            $this->resultExpected = $answer['resultExpected'];
            
            //expression array organization
            $this->expressions = $expressions;

            //calc response
            $this->$winnersOrNot[] = self::getVerificatingAnswers(
                $this->name, 
                $this->op, 
                $this->choice, 
                $this->resultExpected,
                $this->$expressions);
        }
    }

    //verification answers
    private function getVerificatingAnswers($name, $op, $choice, $resultExpected, $expressions){
        $response;
    
        //choice expression
        switch($op){
            case 1:
                $response = self::analizeExpression($name, $op, $resultExpected, $expressions[0]);
                break;
            case 2:
                $response = self::analizeExpression($name, $op, $resultExpected, $expressions[1]);
                break; 
            case 3:
                $response = self::analizeExpression($name, $op, $resultExpected, $expressions[2]);
                break;
            default:
                $response = "invalid value for choice";
        }

        return $response;
    }

    //analize expression
    private function analizeExpression($name, $op, $resultExpected, $expressions){
        //digit's organizations
        $a = $expressions[0];
        $b = $expressions[2];
        $resultTemp = 0;

        //case 'impossible'
        
        //default cases
        switch($op){
            case '+':
                $resultTemp = $a + $b;
                break;
            case '-':
                $resultTemp = $a - $b;
                break;
            case '*':
                $resultTemp = $a * $b;
                break;
        }

        if ($resultTemp == $resultExpected){
            return $name;
        }
    }
    
    //getNames
    public function getWinnersOrNot(){
        return $this->winnerOrNot;
    }
}

//main
//input
$inputLoop = trim(readLine());

//input expression
for ($i = 0; $i < $inputLoop; $i++){
    $expressions[] = trim(readLine());
}

//input answers
for ($i = 0; $i < $inputLoop; $i++){
    $answers[] = trim(readLine());
}

$winnersOrNot = (Operation($expressions, $answers))->getWinnersOrNot();
print_r($winnersOrNot);
