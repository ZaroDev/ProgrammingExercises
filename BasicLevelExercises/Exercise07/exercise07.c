/*07. Write a program that ask for base and height of a triangle and computes area.
    area = (base*height)/2;
*/

#include <stdio.h>

int main()
{
    int base = 0;
    int height = 0;

    printf("Insert the base of your triangle:");
    scanf_s("%i", &base);

    printf("Insert the height of your triangle:");
    scanf_s("%i", &height);

    printf("The area of your triangle is %i", (base * height) / 2);

    return 0;
}