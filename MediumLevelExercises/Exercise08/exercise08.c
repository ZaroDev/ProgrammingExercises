//08. Write a program that asks for 10 numbers to the user and show the sum and product of all of them. Use while loop.

#include <stdio.h>

int main()
{
	int num = 0;
	int counter = 0;
	int sums = 0;
	int mutl = 1;

	while (counter < 10)
	{
		counter++;

		printf("Introduce a the %i :", counter);
		scanf_s("%i", &num);

		sums += num;
		mutl *= num;
	}

	printf("Sum = %i\nMult = %i", sums, mutl);

	getchar();

	return 0;
}