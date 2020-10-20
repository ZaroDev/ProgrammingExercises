#include <stdio.h>
//01. Write a program that asks for a number and determines if the number is even or odd.
int main()
{
	int number = 0;

	printf("Introduce your number: ");
	scanf_s("%i", &number);

	if ((number % 2) == 0)
	{
		printf("Your number is even!\n");
	}
	else
	{
		printf("Your number is odd!\n");
	}

	getchar();

	return 0;
}
