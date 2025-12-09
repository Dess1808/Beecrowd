#include<stdio.h>

int main(void)
{
    //input dimesino
    int n = 0;
    int safe_or_unsafe = 0;

    scanf("%d", &n);

    n += 1;

    //create matrix
    int matrix[n][n];

    //input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //verification
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            //somando valores das posicoes - manipulacao de indexes
            safe_or_unsafe = matrix[i][j] + matrix[i][j+1] + matrix[i+1][j] + matrix[i+1][j+1];    

            if (safe_or_unsafe >= 2)
                printf("S");
            else 
                printf("U");
        }

        putchar('\n');
    }

    return 0;
}