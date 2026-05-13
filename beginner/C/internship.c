#include<stdio.h>

int main(void)
{
    int m = 0;
    int n = 0;
    int c = 0;
    double sum_notes = 0.0;
    double final_note = 0.0;
    int sum_all_c = 0;
    

    //input
    while((scanf("%d", &m)) != EOF)
    {
        for (int i = 0; i < m; i++)
        {
            scanf("%d%d", &n, &c);

            sum_notes += n * c;
            sum_all_c += c;
        }

        //output
        printf("%.4f\n", sum_notes / (sum_all_c * 100));

        //reset variabels
        m = 0;
        n = 0;
        c = 0;
        sum_notes = 0.0;
        final_note = 0.0;
        sum_all_c = 0;
    }

    return 0;
}