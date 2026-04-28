#include <stdio.h>

int main()
{
    int numb_phrases = 2;
    char phrases[2][10];

    //verificar por que não no laço for!!
    //input
    for (int i = 0; i < numb_phrases; i++)
    {
        for (int j = 0; j < numb_phrases; j++)
        {   
            scanf("%s", phrases[i]);
        }
    }

    //output
    for (int i = 0; i < numb_phrases; i++)
    {
        printf("%s\n", phrases[i]);
    }

    return 0;
}