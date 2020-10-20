#include <stdio.h>

int main()
{
    int i = 0;
    int number = 1;
    int count = 0;

    printf(" Prime Number from 1 to 100 are: \n");
    while (number <= 100)
    {
        count = 0;
        i = 2;
        while (i <= number / 2)
        {
            if (number % i == 0)
            {
                count++;
            }
            i++;
        }
        if (count == 0 && number != 1)
        {
            printf(" %i ", number);
        }
        number++;
    }
    return 0;
}