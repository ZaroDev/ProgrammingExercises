// 12. Write a function to calculate power of a value. Function declaration should be:  int RaiseToPower(int value, int power);
#include <stdio.h>

int RaiseToPower(int value, int power);

int main()
{
	int value = 0;
	int power = 0;

	printf("Introduce a value: ");
	scanf_s("%i", &value);
	printf("Introduce a power: ");
	scanf_s("%i", &power);

	printf("The power of %i to %i is %i", value, power, RaiseToPower(value, power));

	return 0;
}
int RaiseToPower(int value, int power)
{
	int result = 1;
	while (power != 0)
	{
		result *= value;
		power--;
	}

	return result;
}