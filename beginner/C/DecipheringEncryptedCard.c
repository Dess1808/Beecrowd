#include<stdio.h>
#include<string.h>

void clear_buffer();

int main(void)
{
    //variabels default
    int size_cipher = 0;
    int amount_phrases = 0;
    char phrases[1000][100];

    //input 
    scanf("%d %d", &size_cipher, &amount_phrases);
    clear_buffer();

    //implementar entrada da palavras cifradas!
    char cipher1[size_cipher];
    char cipher2[size_cipher];

    //input cipher1
    fgets(cipher1, size_cipher, stdin);
    cipher1[strcspn(cipher1, "\n")] = '\0';

    //input cipher2
    fgets(cipher2, size_cipher, stdin);
    cipher2[strcspn(cipher2, "\n")] = '\0';

    //input phrases
    for (int i = 0; i < amount_phrases; i++)
    {
        fgets(phrases[i], sizeof(phrases[i]), stdin);

        //rmv \n
        phrases[i][strcspn(phrases[i], "\n")] = '\0';
    }

    putchar('\n');

    //output
    printf("output..\n");
    for (int i = 0; i < amount_phrases; i++)
    {
        printf("%s\n", phrases[i]);
    }

    return 0;
}

void clear_buffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}