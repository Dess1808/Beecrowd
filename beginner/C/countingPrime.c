#include<stdio.h>
#include<math.h>

int main(void){
    unsigned long long n = 0;
    const double ERRORAJUST = 1.25506;

    //input
    scanf("%lli", &n);

    //min
    double min = n / log(n);

    //max 
    double max = ERRORAJUST * min; //same value of n/log(n)


    printf("%.1f %.1f\n", min, max);

    return 0;
}
