#include<stdio.h>

int main(void){
    //control variabels
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    int month = 0;
    int day = 0;
    int day_for_christimas = 0;
    int sum_day_months = 0;

    //input - EOF condition
    while(scanf("%d%d", &month, &day) != EOF){
        //verification
        for (int i = month - 1, n = 12; i < n; i++){
            sum_day_months += months[i];
        }

        //mines input day for user
        day_for_christimas = sum_day_months - day;

        if (day_for_christimas >= 0){
            //dias validos para o natal 
            if (day_for_christimas == 0)
                printf("E natal!\n");
            else if (day_for_christimas == 1)
                printf("E vespera de natal!\n");
            else
                printf("Faltam %d dias para o natal!\n", day_for_christimas);
        } else {
            //ja passou 
            printf("Ja passou!\n");
        }   

        //reset variabeles
        month = 0;
        day = 0;
        day_for_christimas = 0;
        sum_day_months = 0;
    }  
}

/**
 * meses de 2016
 * janeiro - 31
 * Ferereiro - 29
 * Março - 31
 * Abril - 30 
 * Maio - 31
 * Junho - 30
 * Julho - 31
 * Agosto - 31
 * Setembro - 30
 * Outubro - 31
 * Novembro - 30 
 * dezembro - 25 (até no natal)
 * 
 * possivel formula (meses* + dezembro25 - diasInserido)
*/