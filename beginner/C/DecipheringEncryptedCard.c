#include<stdio.h>
#include<string.h>
#include<ctype.h>

void clear_buffer();

int main(void)
{
    // //variabels default
    // int size_cipher = 0;
    // int amount_phrases = 0;
    // char phrases[1000][100];

    // //input 
    // scanf("%d %d", &size_cipher, &amount_phrases);
    // clear_buffer();

    // //implementar entrada da palavras cifradas!
    // char cipher1[size_cipher];
    // char cipher2[size_cipher];

    //input cipher1
    /*
        1 - identificar cipher1, alterar mesma posicao no cipher2
        2 - identificar cipher2, alterar na mesma posicao de cipher1 
    */

    //input test

    //input phrases
    // for (int i = 0; i < amount_phrases; i++)
    // {
    //     fgets(phrases[i], sizeof(phrases[i]), stdin);

    //     //rmv \n
    //     phrases[i][strcspn(phrases[i], "\n")] = '\0';
    // }


    //logic problem
    char cipher1[6] = {'Z', 'E', 'N', 'I', 'T', '\0'}; 
    char cipher2[6] = {'P', 'O', 'L', 'A', 'R', '\0'};
    char phrases[100] = {'O', 's', 'r', 'o', ' ', 'r', 'o', 'x', 'r', 'e', ' ', 'o', 's', 'r', 'i', '\0'};

    //cipher1
    for (int i = 0; phrases[i] != '\0'; i++)
    {
        //posso utilizar o tamanho da word cipher inserido pelo usuario
        for (int j = 0; cipher1[j] != '\0'; j++)
        {
            //cipher1 verification
            if (cipher1[j] == phrases[i])
            {
                phrases[i] = cipher2[j];
            }
            else if (tolower(cipher1[j]) == phrases[i])
            {
                phrases[i] = tolower(cipher2[j]);
            }
            else if (cipher2[j] == phrases[i]) //cipher2 verification
            {
                phrases[i] = cipher1[j];
            }
                
            else if (phrases[i] == tolower(cipher2[j]))
            {
                phrases[i] = tolower(cipher1[j]);
            }        
        }
    }


    //output
    printf("%s\n", phrases);

    return 0;
}

void clear_buffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}