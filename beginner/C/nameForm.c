#include<stdio.h>
#include<string.h>

int main(void){
    char name[500];

    //input
    fflush(stdin);
    scanf("%[^\n]", name);

    if (strlen(name) <= 80)
        printf("YES\n");
    else 
        printf("NO\n");

    return 0;
}