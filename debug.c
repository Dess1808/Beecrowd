#include<stdio.h>

int main(void)
{
    char string[5];

    scanf("%s", string);

    int number = (int) string[0];

    printf("%d\n", number);
}