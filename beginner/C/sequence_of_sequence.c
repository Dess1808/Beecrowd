#include<stdio.h>

int main(void)
{
    int x = 0;
    int caso = 1;
    int count_numbers = 0;

    //verificar "configurações" do scanf
    while((scanf("%d", &x)) != EOF)
    {
        //count number
        for (int i = 0; i <= x; i++)
        {
            if (i == 0)
                count_numbers++;
            else if (i == 1)
                count_numbers++;
            else 
            {
                for (int j = 0; j < i; j++)
                    count_numbers++;
            }
        }

        //tramento para 0
        if (x == 0)
        {
            printf("Caso %d: %d numero\n%d", caso, count_numbers, x);
        }
        else 
        {
            //output
            printf("Caso %d: %d numeros\n", caso, count_numbers);

            //output number
            for (int i = 0; i <= x; i++)
            {
                if (i == 0)
                    printf("%d ", i);
                else if (i == 1)
                    printf("%d ", i);
                else 
                {
                    for (int j = 0; j < i; j++)
                    {
                        printf("%d ", i);
                    } 
                }
            }
        }
        
        //next line
        putchar('\n');
        putchar('\n');

        //update variabel
        caso++;
        count_numbers = 0;
    }

    return 0;
}

/*  
    gerar sequencia que repete o valores n
    obs: o ideal seria utilizar uma vector dinamico para depois contar apenas o tamanho dele
*/
