#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void resetVector(char* s);

int main(void)
{
    char hour_string[5];
    int hour = 0;
    int minutes = 0;
    int size = 0;

    //incializando com null (\0)
    resetVector(hour_string);

    //OEF fix!
    while((scanf("%s", hour_string)) != EOF)
    {
        //e preciso resetar o vetor 'hour_string'

        //verificação
        //verificar quantos digitos tem
        for (int i = 0; i < 5; i++)
        {
            if (isdigit(hour_string[i]))
            {
                size += 1;
            }
        }

        //converter 
        //igual a 4, minuto position "3"
        //igual a 3, minuto position "2"

        if (size == 3)
        {
            hour = atoi(&hour_string[0]);
            minutes = atoi(&hour_string[2]);  
        }
        else 
        {
            hour = atoi(&hour_string[0]);
            minutes = atoi(&hour_string[3]); 
        }   

        //calculo
        if (hour == 7)
        {
            printf("Atraso maximo: %d\n", minutes);
        }
        else if (hour < 8)
        {
            printf("Atraso maximo: 0\n");
        }
        else
        {
            printf("Atraso maximo: %d\n", (((hour - 8) + 1) * 60) + minutes);
        }

        //resetando vetor hour_string
        resetVector(hour_string);
        size = 0;
    }

    return 0;
}

void resetVector(char* s)
{
//resete vetor 
    for (int i = 0; i < 5; i++)
    {
        s[i] = '\0';
    }
}   

/*
converter entrada string em inteiro
depende do horario que Bino acorda
horario de referencia 8:00
Bino demora 60 minutos para chegar na estação
calcular essa diferenca
obs: finalizar programa com EOF
*/