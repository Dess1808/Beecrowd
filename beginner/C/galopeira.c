#include<stdio.h>
#include<string.h>

int main(void){
    int t = 0;
    int length = 0;
    char word[10000];

    //input
    scanf("%d", &t);

    //looop verification
    for (int i = 0; i < t; i++){
        scanf("%s", word);
        length = strlen(word);
        //output
        printf("%.2f\n", (float) length/100);
    }

    return 0;
}



