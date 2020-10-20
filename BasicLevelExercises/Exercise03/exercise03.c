/* 03. Write a program that asks for 2 numbers and shows its sum, multiplication, substraction and division. 
 Show every operation in a separate line.*/

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

	printf("%i + %i = %i \n", number01, number02, number01 + number02);
	printf("%i - %i = %i \n", number01, number02, number01 - number02);
	printf("%i x %i = %i \n", number01, number02, number01 * number02);
	printf("%i / %i = %4f \n", number01, number02, (float)number01 / (float)number02);

	return 0;
}
