#include <stdio.h>
#include <stdlib.h>

void Calculator(float value1, float value2, char operator, float* result, int* error);
void DrawOperationMenu(char *selection);

int main()
{
	float value1 = 0;
	float value2 = 0;
	char operator = 0;
	float result = 0;
	int error = 0;

	printf("Introduce a number: ");
	scanf_s("%f", &value1);
	
	printf("Introduce a number: ");
	scanf_s("%f", &value2);

	DrawOperationMenu(&operator);

	Calculator(value1, value2, operator, &result, &error);
	switch (error)
	{
		case 0:
		{
			printf("%f", result);

		}break;
		case 1:
		{
			printf("Math Error");
		}break;
		default: break;
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
	else if (operator == '^')
	{
		for(int i = 1; i < value2; i++)
		{
			*result = value1 * value1;
		}
	}
	else if (operator == 's')
	{
		system("pause");
		*error = 2;
	}
}
void DrawOperationMenu(char *selection)
{
	char operator = 0;
	printf("Opertions: \n + (Sum)\n - (Substract)\n * (Multiply)\n / (Divide)\n ^ (Power)\n s (exit)");
	scanf_s(" %c", &operator);
	*selection = operator;

}