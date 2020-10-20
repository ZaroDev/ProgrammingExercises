/*14. Write a program that ask for 3 articles and apply a 15% discount offer to the total buying prize.
*/
#include<stdio.h>

int main()
{
	int value01 = 0;
	int value02 = 0;
	int value03 = 0;
	float result = 0;

	printf("Insert the first value:");
	scanf_s("%i", &value01);
	printf("Insert the second value:");
	scanf_s("%i", &value02);
	printf("Insert the third value:");
	scanf_s("%i", &value03);

	result = (value01 + value02 + value03) * 0.85f;

	printf("Your result is %0.2f", result);

	return 0;

}