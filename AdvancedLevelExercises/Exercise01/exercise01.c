//01. Write a program that asks for a maximum number and shows all multiples of 3 between 1 and that number.

#include <stdio.h>

int main()
{
	int fNum = 0;
	int maxNum = 0;
	
	printf("Introduce the maximun number for the multiples of 3: ");
	scanf_s("%i", &maxNum);

	fNum = 3;

	while (fNum <= maxNum)
	{
		if (fNum % 3 == 0)
		{
			printf("%i\n", fNum);
		}
		fNum++;
	}

	return 0;
}