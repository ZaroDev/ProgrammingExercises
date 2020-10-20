/* 08. Write a program that asks for radius of a circle and find its diameter, circunference and area.
    diameter = radius*2;
    circunference = 2*PI*radius;
    area = PI*radius*radius;

*/

#include <stdio.h> // printf(), scanf_s()
#define PI 3.1415926f //We can also define pi by adding const float pi = 3.1415926f;

int main()
{
    float radius = 0.0f;
    float diameter = 0.0f;
    float circunference = 0.0f;
    float area = 0.0f;

    printf("Insert the radius of your circle: ");
    scanf_s("%f", &radius);

    diameter = radius * 2;
    circunference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nThe diameter of your circle is %2.2f \n", diameter);
    printf("\nThe circumference of your circle is %2.2f \n", circunference);
    printf("\nThe area of your circle is %2.2f", area);

    return 0;
}