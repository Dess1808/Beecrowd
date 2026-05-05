#include<stdio.h>
#include<string.h>
#include<ctype.h>

void clear_buffer();
char char_verificator(char phrase_value, char *cipher1, char *cipher2, int size_cipher);

int main(void)
{
    //variabels default
    int size_cipher = 0;
    int amount_phrases = 0;
    
    while((scanf("%d %d", &size_cipher, &amount_phrases)) != EOF)
    {
        clear_buffer();

        //create phrases by and reset
        char phrases[amount_phrases][1000];

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

        //select phrase
        for (int i = 0; i < amount_phrases; i++)
        {
            for (int j = 0; phrases[i][j] != '\0'; j++)
            {
                phrases[i][j] = char_verificator(phrases[i][j], cipher1, cipher2, size_cipher);
            }    
        }

        //output
        for (int i = 0; i < amount_phrases; i++)
        {
            printf("%s\n", phrases[i]);
        }
        
        putchar('\n');

        //reset variables
        size_cipher = 0;
        amount_phrases = 0;
    }
    

    return 0;
}

void clear_buffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

char char_verificator(char phrase_value, char *cipher1, char *cipher2, int size_cipher)
{
    for (int i = 0; i < size_cipher; i++)
    {
        //cipher1 verification
        if (cipher1[i] == phrase_value)
        {
            //is it digit?
            if (isdigit(phrase_value))
            {
                phrase_value = tolower(cipher2[i]);
            }
            else if (ispunct(phrase_value)) //is it pontuaction?
            {
                phrase_value = tolower(cipher2[i]);
            } 
            else if (phrase_value == ' ') //is it space blank?
            {
                phrase_value = tolower(cipher2[i]);
            }
            else
            {
                phrase_value = cipher2[i]; //upper case by default
            } 
                
            
            break;
        } 
        else if (tolower(cipher1[i]) == phrase_value) //cipher1 verificaton lowercase
        {
            phrase_value = tolower(cipher2[i]);
            break;
        }
        else if (cipher2[i] == phrase_value) //cipher2 verification
        {
            //is it digit?
            if (isdigit(phrase_value))
            {
                phrase_value = tolower(cipher1[i]);
            }
            else if (ispunct(phrase_value)) //is it pontuaction?
            {
                phrase_value = tolower(cipher1[i]);
            } 
            else if (phrase_value == ' ') //is it space blank?
            {
                phrase_value = tolower(cipher1[i]);
            }
            else
            {
                phrase_value = cipher1[i]; //upper case by default 
            } 
                
            break;
        } 
        else if (tolower(cipher2[i]) == phrase_value) //cipher2 verificaton lowercase
        {
            phrase_value = cipher1[i];
            break;
        }
    }
    
    return phrase_value;
}