/**
 * base_are = 3.14 * pow(2, (diametro/2))
 * height  = volume / (base_area * 3.14)
 * 
 */

#include<stdio.h>
#include<math.h>

double const PI = 3.14;

int main(void)
{
    double diameter = 0.0;
    double volume = 0.0;
    double base_area = 0.0;
    double height = 0.0;
    double ray = 0.0;

    //input
    while(scanf("%lf%lf", &volume, &diameter) != EOF)
    {
        ray = diameter / 2;
        base_area = PI * pow(ray, 2);
        height = volume / base_area;

        //output
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", height, base_area);
    }

    return 0;
}