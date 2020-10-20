/*
15. Write a program that asks for seconds and convert it into minutes, hours and days.
    minutes = seconds/60.0f;
    hours = minutes/60.0f;
    days = hours/24.0f;*/

#include<stdio.h>

int main()
{
    float seconds = 0.0f;
    float minutes = 0.0f;
    float hours = 0.0f;
    float days = 0.0f;

    printf("Insert the number of seconds to convert:");
    scanf_s("%f", &seconds);

    minutes = seconds / 60.0f;
    hours = minutes / 60.0f;
    days = hours / 24.0f;

    printf("Your number of seconds is %0.2f minutes or %0.2f hours or %0.2f days", minutes, hours, days);

    return 0;

}