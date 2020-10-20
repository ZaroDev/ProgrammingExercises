#include <stdio.h>

// 11. Write a function to check if an integer is negative. Function declaration should be:  int IsNegative(int num);

int IsNegative(int num);

int main()
{
	int num = 0;
	
	printf("Introduce a number: ");
	scanf_s("%i", &num);

	IsNegative(num);

	return 0;
}

int IsNegative(int num)
{
	if (num < 0)
	{
		printf("%i is negative", num);
	}
	else
	{
		printf("%i is positive", num);
	}
}