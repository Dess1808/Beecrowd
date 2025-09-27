#include<stdio.h>

int calc_peek_valley(int numbers[10000], int n);

int main(void){
    int numbers[10000]; 
    int n = 0;

    //input N
    scanf("%d", &n);

    //input number vector
    for (int i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }

    // n = 0
    if (n == 0)
        printf("%d\n", n);
    else if (n == 1)
    {
        if (numbers[0] != 0)
            printf("1\n");
        else 
            printf("0\n");
    }
    else 
    {
        printf("%d\n", calc_peek_valley(numbers, n));
    }
    

    return 0;
}

//trabalhar logic
int calc_peek_valley(int numbers[10000], int n){
    /*
        peek - anterior menor
        valley - anterior maior
    */ 

    char actual = ' ';
    char before_status = ' ';

    // start second value
    for (int i = 1; i < n; i++)
    {
        if (numbers[i] > numbers[i-1])
        {
            // peek
            actual = 'p';
        }
        else if (numbers[i] < numbers[i-1])
        {
            // valley
            actual = 'v';
        }
        else 
        {   
            // igual, valley and peek
            return 0;
        }

        // status teste
        if (before_status == actual)
            return 0;
        else 
            before_status = actual;
    }

    // tudo ok
    return 1;
}
