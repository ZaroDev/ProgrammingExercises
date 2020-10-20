#include <stdio.h>
//03. Write a program that asks for 3 numbers to the user and determinate the greater one. Take care of side posibilities (equal numbers).

int main ()
{
int num01 = 0;
int num02 = 0;
int num03 = 0;

printf("Introduce first number: ");
scanf_s("%i", &num01);
printf("Introduce second number: ");
scanf_s("%i", &num02);
printf("Introduce third number: ");
scanf_s("%i", &num03);

if ((num01 > num02) && (num01 > num03))
{
	printf("%i is the grather number", num01);
}
else if ((num02 > num01) && (num02 > num03))
{
	printf("%i is the grather number", num02);
}
else if ((num03 > num01) && (num03 > num02))
{
	printf("%i is the grather number", num03);
}
else
{
	printf("%i, %i and %i are equals", num01, num02, num03);
}

getchar();

return 0;
}