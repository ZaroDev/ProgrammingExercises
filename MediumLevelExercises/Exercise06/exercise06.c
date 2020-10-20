// 06. Write a program that asks for 1 number to the user and show its multiply table.

#include <stdio.h>

int main()
{
	int number = 0;
	int counter = 0;

	printf("Insert the number for the multiply table: ");
	scanf_s("%i", &number);
	printf("Insert the maximum value to multiply the number: ");
	scanf_s("%i", &counter);

	while (counter != 0) 
	{
		printf("%i * %i = %i\n", number, counter, number * counter);

		counter--;
	}

	getchar();

	return 0;
}