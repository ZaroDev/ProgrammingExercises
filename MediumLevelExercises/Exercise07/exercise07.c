//07. Write a program that asks for 2 numbers to the user and show product by sums. Use while loop.

#include <stdio.h>

int main()
{
	int num01 = 0;
	int num02 = 0;
	int counter = 0;


	printf("Introduce your first number: ");
	scanf_s("%i", &num01);
	printf("Introduce your second number: ");
	scanf_s("%i", &num02);

	counter = num02;

	while (counter > 0)
	{
		if (counter != 1) printf("%i + ", num01);
		else printf("%i = %i", num01, num01 * num02);

		counter--;
	}

	return 0;
}