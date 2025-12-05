#include<stdio.h>
#include<math.h>

int ratio_light_intValue(int a, int r);
double ratio_light_doubleValue(int a, int r);
double continues_periodic(int a, double r, int count);
double continues_periodic_recursive(int a, double r, int count);

int main(void){
    
    int root_number = 2;
    int a = (int) sqrt(root_number);
    int count = 0;

    //input
    scanf("%d", &count);

    printf("%.10f\n", continues_periodic(a, root_number, count));

    return 0;
}

double continues_periodic(int a, double r, int count){
    double result = 0;

    //preciso de outro caso base?!, verificar !!
    if (count == 0)
    {
        //trocar 3 para 1
        return 1;
    }
    else if (count == 1)
    {   
        //trocar 3 para 1
        result = 1 + (1.0 / (double) ratio_light_intValue(a, r));
        return result;
    } 
    else 
    {
        //verificar logica recursiva !!!!!
        // return continues_periodic_recursive(a, r, count);
        //trocar 3 para 1
        return 1 + (1.0 / continues_periodic_recursive(a, r, count));
    }
}

double continues_periodic_recursive(int a, double r, int count){
    //base case
    //com um a menos pos preciso que o ultimo calculo seja com o "3" como "ratio_ligth_intValue"
    //como nao consigo mudar o valor de retorno do ratio_light...., tive que improvisar calculando na funcao pai
    //nela consigo fazer o ultimo calculo que seria com o valor 3
    if (count == 1){
        // return (double) ratio_light_intValue(a, r);
        //trocar 6.0 para 2.0
        return 2.0;
    } 
    else 
    {
        count--;
        //trocar 6 para 2
        return 2 + (1.0 / continues_periodic_recursive(a, r, count));
    }

}


int ratio_light_intValue(int a, int r)
{
    return (sqrt(r) + a) / (r - pow(a, 2));
}

// double ratio_light_doubleValue(int a, int r){
//     return (sqrt(r) + a) / (r - pow(a, 2));
// }