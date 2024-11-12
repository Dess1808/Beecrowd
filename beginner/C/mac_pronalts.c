#include<stdio.h>

int main(void)
{
    //controle variable
    int reptition = 0;
    int id = 0;
    int quantity = 0;
    double total = 0.0;

    scanf("%d", &reptition);

    for (int i = 0, n = reptition; i < n; i++)
    {
        //input values
        scanf("%d%d", &id, &quantity);

        switch (id)
        {
        case 1001:
            total = total + quantity * 1.50;
            break;
        case 1002:
            total = total + quantity * 2.50;
            break;
        case 1003:
            total = total + quantity * 3.50;
            break;
        case 1004:
            total = total + quantity * 4.50;
            break;
        case 1005:
            total = total + quantity * 5.50;
            break;
        default:
            break;
        }
    }

    //output
    printf("%.2f\n", total);

    return 0;
}