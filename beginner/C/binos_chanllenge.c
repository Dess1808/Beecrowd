#include<stdio.h>

int main(void)
{
    int n = 0;
    int count_two = 0;
    int count_three = 0;
    int count_four = 0;
    int count_five = 0;
    
    //input count
    scanf("%d", &n);

    //create array 
    int l[n];

    //input values 
    for (int i = 0; i < n; i++)
        scanf("%d", &l[i]);

    //verification 
    for (int i = 0; i < n; i++)
    {
        //multiple 2
        if ((l[i]%2) == 0)
            count_two += 1;
        
        //multiple three
        if ((l[i]%3) == 0) 
            count_three += 1;
        
        //multiple four
        if ((l[i]%4) == 0) 
            count_four += 1;
        
        //multiple five 
        if ((l[i]%5) == 0)
            count_five += 1;
    }

    //output
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", count_two, count_three, count_four, count_five);

    return 0;
}