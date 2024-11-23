#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    char digit;
    char hour_string[5];
    int size = 0;
    int hour = 0;
    int minutes = 0;

    scanf("%s", hour_string);

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

    printf("%d : %d\n", hour, minutes);
   
    return 0;
}