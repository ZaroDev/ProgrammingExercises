//04. Write a program that asks for a month number and shows the number of days and name of the month.

#include <stdio.h>

int main()
{
	int month = 0;

	printf("Introduce the month number: ");
	scanf_s("%i", &month);

	if (month == 1) printf("January has 31 days!");
	else if (month == 2) printf("Febraury has 29 days");
	else if (month == 3) printf("March has 31 days");
	else if (month == 4) printf("April has 30 days");
	else if (month == 5) printf("May has 31 days");
	else if (month == 6) printf("June has 30 days");
	else if (month == 7) printf("July has 31 days");
	else if (month == 8) printf("August has 31 days");
	else if (month == 9) printf("September has 30 days");
	else if (month == 10) printf("October has 31 days");
	else if (month == 11) printf("November has 30 days");
	else if (month == 12) printf("December has 31 days");
	else printf("There's no name for that month number!!");


	return 0;
}