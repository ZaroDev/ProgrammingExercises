/*11. Write a program that asks for a temperature in Celsius(°C) and convert it into Fahrenheit(°F).
    celsius = 5*(fahrenheight - 32)/9;*/

#include <stdio.h>

int main()
{
    float temperature = 0;

    printf("Insert your temperature in ºC:");
    scanf_s("%i", &temperature);

    printf("Your temperature in Fahrenheight is %0.2fºF", (5 * (temperature - 32)) / 9);

    return 0;
}