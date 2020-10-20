#include <stdio.h>

void Calculator(float value1, float value2, char operator, float* result, int* error);

int main()
{
	float value1 = 0;
	float value2 = 0;
	char operator = 0;
	float result = 0;
	int error = 0;

	printf("Introduce a number: ");
	scanf_s("%f", &value1);
	printf("Introduce a operator: ");
	scanf_s("%c", &operator, 1);
	printf("Introduce a number: ");
	scanf_s("%f", &value2);

	Calculator(value1, value2, operator, &result, &error);
	if (error == 0)
	{
		printf("%f", result);
	}
	else
	{
		printf("Error %i", error);
	}

	return 0;
}
void Calculator(float value1, float value2, char operator, float* result, int* error)
{
	if (operator == '+')
	{
		*result = value1 + value2;

	}
	else if (operator == '-')
	{
		*result = value1 - value2;

	}
	else if (operator == '*')
	{
		*result = value1 * value2;

	}
	else if (operator == '/')
	{
		if (value2 != 0) 
		{

			*result = value1 / value2;
		}
		else
		{
			*error = 1;
		}
	}
}