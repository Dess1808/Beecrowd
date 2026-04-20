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
   private $a;
   private $operator;
   private $b;
   private $resultPrepare;

   public function __constructor($stringInput){
        //transformartion 
        $arrayInput = str_split($stringInput);
        $this->a = $arrayInput[0];
        $this->operator = $arrayInput[1];
        $this->b = $arrayInput[2];
        $this->resultPrepare = $arrayInput[4];
   }

   //methods
   
}