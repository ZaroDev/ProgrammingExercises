/*12. Write a program that ask of a value in centimeters and computes the inch equivalent.
    inch = centimeters/2.54f;*/

#include <stdio.h>

int main()
{
    int centimeters = 0;

    printf("Insert your number in centimeters:");
    scanf_s("%i", &centimeters);

    printf("Your number in inches is %0.2f inches", centimeters / 2.54f);

    return 0;
}