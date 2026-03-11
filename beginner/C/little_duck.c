#include<stdio.h>

int main(void)
{
    unsigned long long int p = 0;

    while(scanf("%llu", &p))
    {
        //input
        if (p == -1)
        {
            return 0;
        }
        else if (p == 0)
        {
            printf("%llu\n", p);
        }   
        else
        {
            printf("%llu\n", p - 1);
        } 

        //reset
        p = 0;
    }
}