#include<stdio.h>
#include<string.h>

int main(void)
{
    char text[500];

    //input
    //restringindo entrada de caracteres à 140 fixos
    scanf("%[^\n]", text);

    //ouputs
    if (strlen(text) <= 140)
    {
        printf("TWEET\n");
    } 
    else 
    {
        printf("MUTE\n");
    }

    return 0;
}