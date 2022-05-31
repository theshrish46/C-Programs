#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int marks, subjects, mark;
    float average;
    printf("Enter the number of the subjects : \n");
    scanf("%d", &subjects);
    for (int i = 0; i < subjects; i++)
    {
    printf("Enter the marks scored by the student in subject %d : \n", i+1);
    scanf("%d", &mark);
    marks = marks + mark;

    }

    average = marks / subjects;

    printf("Average of the student is : %.2f \n", average);
    
    return 0;
}
