//10. Write a program that asks for a sequence of numbers to the user and show the mean of all of them. Process stops when number 0 is introduced.

#include <stdio.h>

int main()
{
	int num = 1;
	int sum = 0;
	//int counter = 1;
	int numbers = 0;

	printf("Introduce 0 to stop the process\n");

	while (num != 0)
	{
		printf("Introduce a number: ");
		scanf_s("%i", &num);

		sum += num;

		numbers++;
			//counter = num;
	}
	numbers--;

	printf("The mean is %i", sum / numbers);

	getchar();

	return 0;
}