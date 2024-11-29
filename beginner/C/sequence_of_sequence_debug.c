#include<stdio.h>

int main(void)
{
    int x = 0;
    int caso = 1;
    int sequence_numbers[200];
    int count_numbers = 0;

    while((scanf("%d", &x)) != EOF)
    {
        //tratamento pra 0 e 1
        if (x == 0)
        {
            printf("Caso %d: 1 numero\n0", caso);
            continue;
        }
        else if (x == 1)
        {
            printf("Caso %d: 2 numeros \n0 1", caso);
            continue;
        }
        else //diferente 0 ou 1
        {
            //only count
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

            //first informations
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
                        printf("%d ", i);
                }
            }
        }

        putchar('\n');  
        putchar('\n');

        //update variabel
        caso++;
        count_numbers = 0;
    }

    return 0;
}