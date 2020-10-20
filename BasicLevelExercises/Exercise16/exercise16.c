/*
16. Write a program that computes your final mark given several marks:
    30% partial exam
    40% 4 class exercises (10% each)
    30% final exam*/

#include <stdio.h>

int main()
{
    int partialExam = 0;
    int classEx01 = 0;
    int classEx02 = 0;
    int classEx03 = 0;
    int classEx04 = 0;
    int finalExam = 0;
    float finalMark = 0.0f;

    printf("Insert the mark of your partial exam:");
    scanf_s("%i", &partialExam);
    printf("Insert the mark of your first class exercise:");
    scanf_s("%i", &classEx01);
    printf("Insert the mark of your second class exercise:");
    scanf_s("%i", &classEx02);
    printf("Insert the mark of your third class exercise:");
    scanf_s("%i", &classEx03);
    printf("Insert the mark of your fourth class exercise:");
    scanf_s("%i", &classEx04);
    printf("Insert the mark of your final exam:");
    scanf_s("%i", &finalExam);

    finalMark = partialExam * 0.3f + ((float)(classEx01 + classEx02 + classEx03 + classEx04) / 4 ) * 0.4f + finalExam * 0.3f;

    printf("Your final mark is %0.2f", finalMark);

    return 0;
}