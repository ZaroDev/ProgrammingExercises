//03. Write a program that asks a birth date and calculates age in days, hours and minutes. -> Required: time()
#include <stdio.h>
#include <time.h>

int main()
{
	time_t seconds;
	int date;
	int month;
	int year;
	seconds = time(NULL);

	printf("What's ur birthday?");
	scanf_s("%i/%i/%i", &date, &month, &year);

	int birthSeconds = (float)(date * 24 * 3600 + month * (365.25 / 12) * 24 * 3600 + year * 365.25 * 24 * 3600);
	int age = birthSeconds - seconds;

	printf("Your age in seconds is %i", age);
	
	
	return 0;
}