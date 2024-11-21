#include<stdio.h>

int main(void)
{
    char digit;
    char hour_string[5];

    while((scanf("%s", hour_string)) != EOF)
    {
        printf("%s\n", hour_string);
    }
 
   
    return 0;
}