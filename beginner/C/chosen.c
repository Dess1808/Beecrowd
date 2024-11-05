#include<stdio.h>

int main(void)
{
    //declaration variables
    int numbers = 0;
    int student_id = 0;
    float note = 0.0;
    float better_note = 8.0; //inciando com um nota padrão
    int better_student = 0;
    int exist = 0;


    //input students_number
    scanf("%d", &numbers);

    for (int i = 0, n = numbers; i < n; i++)
    {
        //input, students id and note
        scanf("%d%f", &student_id, &note);

        //maior que 8 e maior que nota anterior
        if (note >= better_note)
        {
            better_note = note;
            better_student = student_id;
            
            //controller
            exist = 1;
        }        
    }

    //existe nota maior?
    if (exist)
        printf("%d\n", better_student);
    else 
        printf("Minimum note not reached\n");
    
    return 0;

}