#include<stdio.h>
#include<string.h>
#include<ctype.h>

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
    char cipher1[size_cipher+1];
    char cipher2[size_cipher+1];

    //input cipher1
    fgets(cipher1, sizeof(cipher1), stdin);
    cipher1[strcspn(cipher1, "\n")] = '\0';
    clear_buffer();
    
    //input cipher2
    fgets(cipher2, sizeof(cipher2), stdin);
    cipher2[strcspn(cipher2, "\n")] = '\0';
    clear_buffer();

    //input phrases
    for (int i = 0; i < amount_phrases; i++)
    {
        fgets(phrases[i], sizeof(phrases[i]), stdin);

        //rmv \n
        phrases[i][strcspn(phrases[i], "\n")] = '\0';
    }


    //logic problem

    //select phrase
    for (int i = 0; i < amount_phrases; i++)
    {
        //running itself phrases
        for (int j = 0; phrases[i][j] != '\0'; j++)
        {       
            //verification cipher lettera
            for (int k = 0; k < size_cipher; k++)
            {
                //cipher1 verification
                if (cipher1[k] == phrases[i][j])
                {
                    //uppercase default
                    phrases[i][j] = cipher2[k];
                    break;
                }
                else if (tolower(cipher1[k]) == phrases[i][j])
                {
                    phrases[i][j] = tolower(cipher2[k]);
                    break;
                }
                else if (cipher2[k] == phrases[i][j]) //cipher2 verification
                {      
                    //uppercase default
                    phrases[i][j] = cipher1[k];
                    break;
                }
                else if (tolower(cipher2[k]) == phrases[i][j])
                {
                    phrases[i][j] = tolower(cipher1[k]);
                    break;
                }
            }
        }
    }

    //output
    for (int i = 0; i < amount_phrases; i++)
    {
        printf("%s\n", phrases[i]);
    }
    
    putchar('\n');
    putchar('\n');

    return 0;
}

void clear_buffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}