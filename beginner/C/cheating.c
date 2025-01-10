#include<stdio.h>

int main(void)
{
    int p, j1, j2, r, a, result = 0;  

    //input
    scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);

    result = j1 + j2;

    if ((r == 1) && (a == 1))
        printf("Jogador 2 ganha!\n");
    else if ((r == 1) && (a == 0))
        printf("Jogador 1 ganha!\n");
    else if ((r == 0) && (a == 1))
        printf("Jogador 1 ganha!\n");
    else //r == 0, a == 0
    {
        if (p == 1) //player1 even, player2 odd
        {
            if ((result % 2) == 0)
                printf("Jogador 1 ganha!\n");
            else    
                printf("Jogador 2 ganha!\n");
        }
        else //player1 odd, player2 even
        {
            if ((result % 2) == 0)
                printf("Jogador 2 ganha!\n");
            else    
                printf("Jogador 1 ganha!\n");
        }
    }
   
    return 0;    
}