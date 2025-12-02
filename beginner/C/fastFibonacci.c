#include<stdio.h>
#include<math.h>

int main(void)
{
    int a = 0;

    //input
    scanf("%d", &a);

    //binet' forumule
    double result = (pow((1 + sqrt(5)) / 2, a) - pow((1 - sqrt(5)) / 2, a)) / sqrt(5);

    //output
    printf("%.1f\n", result);

    return 0;
}