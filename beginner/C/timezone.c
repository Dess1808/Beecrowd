#include<stdio.h>

int main(void)
{
    int hour = 0;
    int travel = 0;
    int timezone = 0;
    int arrival = 0;

    scanf("%d%d%d", &hour, &travel, &timezone);

    arrival = hour + travel + timezone;

    if (arrival >= 24)
        printf("%d\n", arrival - 24);
    else if (arrival < 0) //negatives
        printf("%d\n", arrival + 24);
    else //positeve <= 24
        printf("%d\n", arrival);

    return 0;
}
