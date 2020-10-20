/*06. Write a program that asks for rectangle width and height and compute area and perimeter:
    area = width*height;
    perimeter = 2*width + 2*height;
*/

#include <stdio.h>

int main()
{
    float width = 0.0f;
    float height = 0.0f;
    float area = 0.0f;
    float perimeter = 0.0f;

    printf("Insert the width of your rectangle:");
    scanf_s("%f", &width);

    printf("Insert the heigth of your rectangle:");
    scanf_s("%f", &height);

    area = width * height;
    perimeter = 2 * width + 2 * height;

    printf("The area of your rectangle is %2.2f \n", area);
    printf("The perimeter of your rectangle is %2.2f", perimeter);

    return 0;
}