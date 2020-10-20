/*09. Write a program that asks for 2 angles of a triangle and find the third angle.
    angle03 = 360 - (angle01 + angle02);*/

#include <stdio.h>

int main()
{
    int angle01 = 0;
    int angle02 = 0;

    printf("Insert the first angle:");
    scanf_s("%i", &angle01);
    printf("Insert the second angle:");
    scanf_s("%i", &angle02);

    printf("The third angle of your triangle is %i", 180 - (angle01 + angle02));

    return 0;
}