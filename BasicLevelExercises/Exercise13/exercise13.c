/*13. Write a program that ask for a valueand computes the 21 % of IVA over that value.
result = value * 1.21f;
*/

#include <stdio.h>

int main()
{
	int value = 0;
	float result = 0;

	printf("Insert the value:");
	scanf_s("%i", &value);

	result = value * 1.21f;

	printf("Your result is %0.2f", result);

	return 0;
}