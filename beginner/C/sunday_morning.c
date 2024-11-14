#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char hour_string[5];
    char hour_char[2];
    char minutes_char[2];
    int hour = 0;
    int minutes = 0;

    //input hour
    scanf("%s", hour_string);

    //separates ways
    for (int i = 0, j = 4, k = 0; i < 2; i++, k++, j--)
    {
        hour_char[k] = hour_string[i];
        minutes_char[k] = hour_string[j];
    }

    //converted
    hour = atoi(hour_char);
    minutes = atoi(minutes_char);
    
    printf("%d %d\n", hour, minutes);

    //gabiarra nao funcinou !!

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