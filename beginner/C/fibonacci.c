#include<stdio.h>

int fibonacci(int n);

int main(void)
{
    int number = 0;

    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("%d ", fibonacci(i));
    }

    putchar('\n');

    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else 
        return fibonacci(n - 1) + fibonacci(n -2);
}