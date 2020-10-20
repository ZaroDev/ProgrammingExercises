//09. Write a program that asks for a sequence of numbers to the user and show the sum of all of them. Process stops when 0 is introduced.

#include <stdio.h>

int main()
{
	int num = 0;
	int sum = 0;
	int counter = 1;

	printf("Write 0 when you want to stop the process\n");

	while (counter > 0)
	{
		printf("Introduce your number: ");
		scanf_s("%i", &num);

		sum += num;
		counter = num;
	}
	
	printf("Sum = %i", sum);

	getchar();

	return 0;
}