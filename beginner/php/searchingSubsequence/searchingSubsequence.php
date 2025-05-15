<?php
//preciso encontrar um jeito de particionar essa string de forma dinamica
//continuar do ponto de onde parou, usar um função ou utilizar o for dinamicamente?
//poderia utilizar o tamanho da string que estmos procurando para ter um "norte"

/*
hipotese 1: utilizar o tamanho da string e comparar até seu final, contando as igualdades
* e posições de ocorrênci
* 
* hipotese 2: Posso pegar por partes a string e ir testando os casos de teste.

hiporte 3: chamadas recursivas com menos "tamanho" da word, com função de primeira ocorrencia
    stripos() -> primeira ocorrencia em uma string
    echo substr($string, 4); 
*/


//a string precisa esta formatada perfeitamente, não funcional
/*
function pesquisaRecursiva($string, $word, $countWord = 0){
    //caso base
    if (strlen($string) < strlen($word)){
        echo $countWord;
        return;
    }

    echo $string . PHP_EOL;
    $wordTest = substr($string, 0, strlen($word));

    //search
    if ($wordTest === $word){
        //encontramos
        $countWord += 1;
        pesquisaRecursiva(substr($string, 4), $word, $countWord);
    } else {
        //proxima palavra menos a palavra ja testadas
        pesquisaRecursiva(substr($string, 4), $word, $countWord);
    }
}

echo pesquisaRecursiva($string, $word) . PHP_EOL;
*/

//controle variavel
$n1 = 0;
$n2 = 0; 
$countCorrect = 0; 
$subsequence = 0;

//EOF - uma tecnica diferente
while($n1 = trim(readLine())){
    $n2 = trim(readLine());
    
    //posso calcular pelo tamanho da string

    //comparation
    for ($num = 0, $numMain = 0, $size = strlen($n2); $num < $size; $num++, $numMain++){
        
        //RESOLVE PROBLEMA COM VALORES PROXIMOS
        echo "valores testados = {$n2[$num]} x {$n1[$numMain]}" . PHP_EOL;
        if ($n2[$num] !== $n1[$numMain]){
            //resete main word e contador de corretos
            $numMain = -1;
            $countCorrect = 0;
            echo "numero diferente" . PHP_EOL;
            continue; //proximo valor
        } else {
            $countCorrect += 1;
            echo "um numero correto encontrado" . PHP_EOL;

            //uma subsequencia completa!
            if ($countCorrect === strlen($n1)){
                $subsequence += 1;
                $countCorrect = 0;
                $numMain = -1;
                echo "uma palavra correta encontrada" . PHP_EOL;
            }
        }
    }

    //output
    echo "total subsequencias = $subsequence" . PHP_EOL;

    //reset counts variables
    $subsequence = 0;
    $countCorrect = 0;
}










