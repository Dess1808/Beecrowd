#include<stdio.h>

int main(void)
{
    int teas[5];
    int tea = 0;
    int amount_tea = 0;

    //input teas
    scanf("%d", &tea);

    //input teas
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &teas[i]);
    }

    //verification 
    for (int i = 0; i < 5; i++)
    {
        if (teas[i] == tea)
            amount_tea += 1;
    }

    //output
    printf("%d\n", amount_tea);

    return 0;
}