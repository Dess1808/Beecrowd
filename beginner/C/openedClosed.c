#include<stdio.h>

int main(void){
    int c = 0;
    int h = 0;
    int m = 0;
    int o = 0;
    
    //input count
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        //hour minute and status door
        scanf("%d%d%d", &h, &m, &o);

        //opened
        if (o) 
        {
            printf("%.2d:%.2d - A porta abriu!\n", h, m);
        } 
        else 
        {
            printf("%.2d:%.2d - A porta fechou!\n", h, m);   
        }

        //reset variables
        h = 0;
        m = 0;
    }

    return 0;
}