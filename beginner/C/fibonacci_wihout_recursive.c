#include<stdio.h>

int main(void)
{
    int number = 0;

    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        if (i == 0)
            printf("%d ", i);
        else if (i == 1)
            printf("%d ", i);
        else
            printf("%d ", (i - 1) + (i - 2));
    }

    putchar('\n');

    return 0;
}