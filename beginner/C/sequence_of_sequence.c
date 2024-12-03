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

            //sempre sera executado, sem espaçamento
            printf("0");

            //output number
            for (int i = 1; i <= x; i++)
            {
                if (i == 1)
                    //fixed, espaçamento à esquerda
                    printf(" %d", i); 
                else 
                {
                    for (int j = 0; j < i; j++)
                    {
                        printf(" %d", i);
                    } 
                }
            }
        }
        
        //next line
        printf("\n\n");

        //update variabel
        caso++;
        count_numbers = 0;
    }
    return 0;
}