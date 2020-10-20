#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num01 = 0;
	int num02 = 0;

	srand(time(NULL));
	num02 = rand();

	printf("Introduce a number: ");
	scanf_s("%i", &num01);

	if (num01 > num02)
	{
		printf("%i is greather than %i", num01, num02);
	}
	else if (num01 < num02)
	{
		printf("%i is lower than %i", num01, num02);
	}
	else if (num01 == num02)
	{
		printf("%i is equal to %i", num01, num02);
	}
	
	return 0;
}