// 02. Write a program that asks for 2 numbers and shows the sum.

#include <stdio.h> // We need this for scanf(), printf()

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

	printf("%i + %i = %i", number01, number02, number01 + number02);

	return 0;
}