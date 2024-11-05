#include<stdio.h>

int main(void)
{
    int size = 0;
    int number = 0;
    unsigned long long int sheep_not_stolen = 0;
    unsigned long long int sum_total = 0;
    int farm_visited = 0;
    unsigned long long int count_place_visited = 0;


    //input size
    scanf("%d", &size);

    //create array for size 
    int numbers[size];

    //input numbers
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
        sum_total += numbers[i];
    }

    //logic 
    for (int increment = 0; increment < size; increment++) //odd
    {
        farm_visited++;

        //ever verification
        if (((numbers[increment] % 2) == 0)) //ever or 0
        {
            for (int decrement = increment; decrement >= 0; decrement--)
            {
                //preciso que nao conte quando for 0
                if (numbers[decrement] > 0) 
                {
                    numbers[decrement] -= 1;
                    count_place_visited++;
                }
            }

            //end programe
            //calc for save sheeps
            sheep_not_stolen = sum_total - count_place_visited;

            //output 
            printf("%d %llu\n", farm_visited, sheep_not_stolen);
            return 0;
        }
        else //odd
        {
            numbers[increment] -= 1;
            count_place_visited++;   
        }
    }

    //calc for save sheeps
    sheep_not_stolen = sum_total - count_place_visited;

    //output 
    printf("%d %llu\n", farm_visited, sheep_not_stolen);
    return 0;
}



/*
conta somente estrelas com numero impares
nao exatamente numeros impares
visitar apenas numeros impares
**lista apenas numeros primos tirando o 2 (unico pa)**
qual o calculo???

hipotese 2:
    E preciso fazer sentido esse numeros pares, ele rouba ovelhas de estrelas com numeros pares???

hipetese 3:
    enquanto for impar avancar para direita "roubando ovelhas", se encontrar um numero par, roubar essa ovelha e decrementar
    voltando a roubar as ovelhas se caso existir 

hipotese final:
    sistema de ida e volta, quando o numero na lista for par ou 0 ele retorna para o inicio "roubando novamente as ovelhas"
    senao, ele continua roubando em frente se o numero de ovelhas for impa
 */