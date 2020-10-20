/*10. Write a program that asks for a value in centimeter and convert it into meter and kilometer.
    kilometer = centimeters/100000;*/

#include <stdio.h>

int main()
{
    int number01 = 0;

    printf("Insert your value in cm:");
    scanf_s("%i", &number01);

    printf("Your value in meters is %fm \n", (float)number01 / 1000);
    printf("Your value in kilometers is %fkm", (float)number01 / 1000000);

    return 0;

}