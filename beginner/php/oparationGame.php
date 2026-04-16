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
*/

class Operation {
    private $expressionInputUser = [];
    private $nameUser;
    private $opSelection;
    private $operation;
    
    public function __constructor($expressionInputUser, $answer = []){
        $this->expressionInputUser = $expressionInputUser;
        $this->nameUser = $answer[0];
        $this->opSelection = $answer[1];
        $this->operation = $answer[2];
    }

    public function getResults(): void{
    
    }

    private function checkOperation($expression, $nameUser, $opSelection, $operation): string{
        
    }
}