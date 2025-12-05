#include<stdio.h>

int main(void)
{
    //input size
    int n = 0;
    scanf("%d", &n);

    //create vector and input
    int rpms[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &rpms[i]);

    //test 
    for (int i = 0; i < n; i++)
    {
        if (n == 1)
            printf("0\n");
        else if (i == 0)
            continue;
        else 
        {
            if (rpms[i] < rpms[i-1])
            {
                printf("%d\n", i+1);
                return 0;
            }
        }
    }

    //se não houver rpms com intervalos menores
    printf("0\n");
    return 0;
}