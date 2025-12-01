/*
    verificar em qual posicao o 42,
    verificar se o 42 esta cercado pelos numeros "7" - logica para encontrar 7, posso 
    usar algum calculo
*/

#include<stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;

    //input dimesions matrix
    scanf("%d%d", &a, &b);

    //create matrix
    long int matrix[a][b];


    //caution: minimus 3 x 3
    //input matrix
    for (int i = 0; i < a; i++) //row
    {
        //columns
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }


    //find number 42
    //row
    for (int i = 0; i < a; i++)
    {
        //columns
        for (int j = 0; j < b; j++)
        {
            //find 42
            if (matrix[i][j] == 42)
            {
                //i need find the 7's square
                //test adjancet
                if (matrix[i][j-1] == 7 && matrix[i][j-1] == 7)
                {
                    //row previus
                    if (matrix[i-1][j-1] == 7 && matrix[i-1][j] == 7 && matrix[i-1][j+1] == 7)
                    {
                        //row next
                        if (matrix[i+1][j-1] == 7 && matrix[i+1][j] == 7 && matrix[i+1][j+1] == 7)
                        {
                            printf("%d %d\n", i+1, j+1);
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("0 0\n");
    return 0;
}
