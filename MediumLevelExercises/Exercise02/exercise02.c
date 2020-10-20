#include <stdio.h>

// 02. Write a program that asks for 2 numbers to the user and determinate the greater one. Take care of side posibilities (equal numbers).
int main()
{
	int num01 = 0;
	int num02 = 0;

	printf("Introduce number one: ");
	scanf_s("%i", &num01);
	printf("Introduce number two: ");
	scanf_s("%i", &num02);

	if (num01 > num02)
	{
		printf("%i is greater than %i", num01, num02);
	}
	else if (num01 == num02)
	{
		printf("%i equals to %i", num01, num02);
	}
	else
	{
		printf("%i is lower than %i", num01, num02);
	}

	getchar();

	return 0;
}