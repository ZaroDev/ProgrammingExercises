/*05. Write a program that ask for an age and computes the number of pulses a person should have after 10 seconds of training.
    pulses = (220 - age)/10;
*/

#include <stdio.h>

int main()
{
    int age = 0;

    printf("Insert your age:");
    scanf("%i", &age);
    getchar();

    printf("Your pulses after 10 seconds should be %i", (220 - age) / 10);

    return 0;

}