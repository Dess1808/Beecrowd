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
    
    public function __construct($expressions, $answers){
        //expression's organization 
        $expressionsTemp = $expressions;
        $this->expressions = $expressions;

        //answers + resultExpected from $expressions 
        foreach($answers as $answer){
            $arrayAnswer = explode(' ', $answer);
            $this->name = $arrayAnswer[0];
            $this->choice = $arrayAnswer[1];
            $this->op = $arrayAnswer[2];

            //verificar se funciona!!
            $this->resultExpected = self::getOnlyExpression($expressionsTemp[0]);
            array_splice($expressionsTemp, 0, 0); //remove by index always the first '0'

            //verification answers
            $this->winnerOrNot[] = self::getVerificatingAnswers(
                $this->name, 
                $this->choice, 
                $this->op,
                $this->resultExpected,
                $this->expressions);
        }
    }


    //methods
    //verification answers
    private function getVerificatingAnswers($name, $choice, $op, $resultExpected, $expressions): string{
        $responseTemp;
    
        //digit's organization
        $a = $expressions[$choice-1][0];
        $b = $expressions[$choice-1][2];

    
        //impossible case
        if ($op == 'I'){
            if (self::isItImpossible($a, $b, $resultExpected)){
                return $name;   
            } else {
                return '';
            }
        } else {
            //default cases
            switch($op){
                case '+':
                    $responseTemp = $a + $b;
                    break;
                case '-':
                    $responseTemp = $a - $b;
                    break;
                case '*':
                    $responseTemp = $a * $b;
                    break;
            } 

            //final verification case default
            if ($responseTemp == $resultExpected){
                return $name;
            } else {
                return '';
            }
        }

       
    }
    
    //position resultExpected from $expression
    private function getOnlyExpression($expressionTemp): int{
        $oneExpression = explode('=', $expressionTemp);
        
        //real position of resultExpected
        return $oneExpression[1];
    }

    //impossible's verification
    private function isItImpossible($a, $b, $resultExpected): bool{
        if (($a + $b) == $resultExpected){
            return false;
        } elseif (($a - $b) == $resultExpected){
            return false;
        } elseif (($a * $b) == $resultExpected){
            return false;
        } else {
            return true;
        }
    }


    //gets values
    public function getWinnersOrNot(): array{
        return $this->winnerOrNot;
    }
}

//main
//input
// $inputLoop = trim(readLine());

// //input expression
// for ($i = 0; $i < $inputLoop; $i++){
//     $expressions[] = trim(readLine());
// }

// //input answers
// for ($i = 0; $i < $inputLoop; $i++){
//     $answers[] = trim(readLine());
// }

//teste value truncated
$expressions = [0 => '8 4=3', 1 => '10 123=90'];
$answers = [0 => 'Alex 1 I', 1 => 'Abner 2 I'];

$winnersOrNot = (new Operation($expressions, $answers))->getWinnersOrNot();
print_r($winnersOrNot);
