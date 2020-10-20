// 04. Write a program that asks for 2 numbers and computes the mean.

#include <stdio.h>

int main()
{
	int number01 = 0;
	int number02 = 0;

	printf("Insert the first number:");
	scanf("%i", &number01);
	getchar();
	

	printf("Insert the second number:");
	scanf("%i", &number02);
	getchar();

	printf("The mean of %i and %i is %0.2f \n", number01, number02, (float)(number01 + number02) / 2);

	return 0;
}