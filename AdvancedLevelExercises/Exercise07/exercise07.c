/*07. Write a calculator program. Program flow should be as follow:
        1) Ask for a number (float)
        2) Ask for desired operation: '+', '-', '*', '/'
        3) Ask for another number (float)
        4) Show operation and results
        5) Go to step 2)
*/
#include <stdio.h>

int main()
{
    float num01 = 0;
    float num02 = 0;
    float result = 0;
    float operation = 0;

    printf("Introduce the first number: ");
    scanf_s("%f", &num01);

    while(num01)
    {
        printf("1: +\n2: -\n3: *\n4: /\nIntroduce the operation:");
        scanf_s("%f", &operation);
        getchar();
       
        printf("Introduce the second number: ");
        scanf_s("%f", &num02);

        if (operation == 1)
        {
            result = num01 + num02;

            printf("%2.2f + %2.2f = %2.2f\n", num01, num02, result);

            num01 = result;
        }
        else if (operation == 2)
        {
            result = num01 - num02;

            printf("%2.2f - %2.2f = %2.2f\n", num01, num02, result);

            num01 = result;
        }
        else if (operation == 3)
        {
            result = num01 * num02;

            printf("%2.2f * %2.2f = %2.2f\n", num01, num02, result);

            num01 = result;
        }
        else if (operation == 4)
        {
            result = num01 / num02;

            printf("%2.2f / %2.2f = %2.2f\n", num01, num02, result);

            num01 = result;
        }
        else printf("Your operation has been not defined.");
    }

    return 0;
}