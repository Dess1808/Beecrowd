#include<stdio.h>
#include<string.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int action_total = 0;
    char action[7];

    //input
    scanf("%d%d", &n, &m);

    action_total = n;

    //input actions
    for (int i = 0; i < m; i++)
    {
        //input string
        scanf("%s", action);

        if (strcmp(action, "fechou") == 0)
        {
            action_total += 2;
            action_total -= 1;
        }

        if (strcmp(action, "clicou") == 0)
        {
            action_total -= 1;
        }
    }

    //output
    printf("%d\n", action_total);
}