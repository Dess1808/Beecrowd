#include<stdio.h>

int main(void)
{
    char hour_string[5];
    int hour = 0;
    int minutes = 0;

    //input hour
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &hour_string[i]);
    }

    //converte pela referencia do primeiro caracter do array, basta indicar o primeiro o "atoi" (segue em bora)!
    hour = atoi(&hour_string[0]);
    minutes = atoi(&hour_string[3]);

    printf("%d %d\n", hour, minutes);

    return 0;
}

/*
converter entrada string em inteiro
dividir string no maio, esquerda e hora, direita e minuto, somar os dois, total
depende do horario que Bino acorda
horario de referencia 8:00
Bino demora 60 minutos para chegar na estação
calcular essa diferenca
*/