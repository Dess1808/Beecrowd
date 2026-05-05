#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    char input[3] = {'$', 'a', '!'};

    for (int i = 0; i < 3; i++)
    {
        if (ispunct(input[i]))
            printf("%c ", input[i]);
    }

    return 0;
}