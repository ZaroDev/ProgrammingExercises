#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Calculator(float value1, float value2, char operator, float* result, int* error);
void DrawOperationMenu(char* selection);

int main()
{
	float value1 = 0;
	float value2 = 0;
	char operator = 0;
	float result = 0;
	int error = 0;

	printf("###################\n");
	printf("#   CALCULATOR    #\n");
	printf("###################\n");

	while (operator != 's')
	{
		printf("Introduce a number: ");
		scanf_s("%f", &value1);

		printf("Introduce a number: ");
		scanf_s("%f", &value2);

		DrawOperationMenu(&operator);

		Calculator(value1, value2, operator, &result, &error);

		switch (error)
		{
			case 0: printf("Result: %f\n", result); break;
			case 1: printf("Math Error\n"); break;
			case 2: printf("Good bye"); break;
			default: break;
		}
	}

	return 0;
}

void Calculator(float value1, float value2, char operator, float* result, int* error)
{
	if (operator == '+') *result = value1 + value2;
	else if (operator == '-') *result = value1 - value2;
	else if (operator == '*') *result = value1 * value2;
	else if (operator == '/')
	{
		if (value2 != 0) *result = value1 / value2;
		else *error = 1;
	}
	else if (operator == '^') *result = pow(value1, value2);
	else if (operator == 's') *error = 2;
}

void DrawOperationMenu(char* selection)
{
	char operator = 0;

	printf("Opertions: \n + (Sum)\n - (Substract)\n * (Multiply)\n / (Divide)\n ^ (Power)\n s (exit)\nChoose operation: ");
	scanf(" %c", &operator);

	*selection = operator;
}