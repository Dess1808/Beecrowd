#include<stdio.h>

int main(){

    int totalHotDogs = 0;
    int totalParticipants = 0;

    //input
    scanf("%d%d", &totalHotDogs, &totalParticipants);

    //output
    printf("%.2f\n", (float) totalHotDogs / (float) totalParticipants);

    return 0;
}