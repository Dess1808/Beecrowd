#include<stdio.h>

int main(void)
{
    int x = 0;
    int caso = 1;

    while(scanf("%d", &x) != EOF)
    {
        //tratamento para 0
        if (x == 0)
        {
            printf("Caso %d: 1 numero\n%d\n", caso, x);
            continue;
        }
            
        //fib calc
        for (int i = 0; i <= x; i++)
        {
            if (i == 0)
                printf("%d ", i);
            else if (i == 1)
                printf("%d ", i);
            else
                printf("%d ", (i - 1) + (i - 2));
        }

        putchar('\n');

        //update variabel
        caso++;
    }

    return 0;
}

/*
    Gerar um sequencia de fibonacci ate numero indicado
    de acordo com a quantidade do numero, repeti-lo
    contar quantos numeros foram gerados
    OBS: fibanacci, informarmos apenas a quantidade de numero que queremos!
*/