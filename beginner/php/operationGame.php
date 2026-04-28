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
    private $winnersOrNot = [];
    private $expressions = [];
    
    public function __construct($expressions, $answers){
        //expression's organization  and winnerOrNot, não esta reescrevendo
        $this->expressions = $expressions; 

        //answers + resultExpected from $expressions 
        foreach($answers as $answer){
            [$this->name, $this->choice, $this->op] = explode(" ", $answer);

            //verification answers
            $this->winnersOrNot[] = self::getVerificatingAnswers(
                $this->name, 
                $this->op,
                $this->expressions[$this->choice-1]); //one expression selected
        }
    }

    //methods
    //verification answers
    private function getVerificatingAnswers($name, $op, $expressionSelected): string{
        $responseTemp = 0;
        $a = 0;
        $b = 0;
        $resultExpected = 0;

        //standardized expression
        $separators = [" ", "="];
        $expressionStandard = explode(" ", str_replace($separators, " ", $expressionSelected));

        //digit's organization e resultExpected
        $a = (int) $expressionStandard[0];
        $b = (int) $expressionStandard[1];
        $resultExpected = (int) $expressionStandard[2];
    
        //impossible case
        if ($op == "I"){
            if (self::isItImpossible($a, $b, $resultExpected)){
                return ''; 
            } else {
                return $name;
            }
        } else {
            //default cases
            switch($op){
                case "+":
                    $responseTemp = $a + $b;
                    break;
                case "-":
                    $responseTemp = $a - $b;
                    break;
                case "*":
                    $responseTemp = $a * $b;
                    break;
            } 

            //final verification case default
            if ($responseTemp != $resultExpected){
                return $name;
            } else {
                return '';
            }
        }

       
    }
    
    //utilites methods**
    //impossible's verification
    private function isItImpossible($a, $b, $resultExpected): bool{
        $yesOrNo = true;

        if (($a + $b) == $resultExpected){
            $yesOrNo = false;
        } elseif (($a - $b) == $resultExpected){
            $yesOrNo = false;
        } elseif (($a * $b) == $resultExpected){
            $yesOrNo = false;
        }

        return $yesOrNo;
    }

    //get final response
    //check output - None Shall Pass, You Shall Pass anda names only
    public function getWinnersOrNotResultFinal(): string{
        //reponse default
        $responseFinal = "None Shall Pass";
        $arrayWithoutBlankSpace = array_diff($this->winnersOrNot, ['']);
        
        //You Shall Pass
        if (count($arrayWithoutBlankSpace) == 0){
            $responseFinal = "You Shall All Pass";
        } else {
            foreach($this->winnersOrNot as $wn){
                if ($wn === ''){
                    $responseFinal = implode(" ", $arrayWithoutBlankSpace);
                    break;
                }
            }
        }
        
        return $responseFinal;
    }
}

//control variables
$inputLoop = 0;
$expressions = [];
$answers = [];

//main
while(($inputLoop = trim(readLine()))){
    //input
    //input expression
    for ($i = 0; $i < $inputLoop; $i++){
        $expressions[] = trim(readLine());
    }

    //input answers
    for ($i = 0; $i < $inputLoop; $i++){
        $answers[] = trim(readLine());
    }

    //obj construct and organization ouput
    $winnersOrNot = (new Operation($expressions, $answers))->getWinnersOrNotResultFinal();

    //output
    echo $winnersOrNot . PHP_EOL;

    //reset variables!!!
    $expressions = [];
    $answers = [];
}