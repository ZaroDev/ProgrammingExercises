#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//04. Write a program that prints five random numbers, like a Lottery. -> Required: srand(), rand()

int main()
{
	srand(time(NULL));
	
	for (int i = 0; i < 5; i++)printf("%i", rand() % 9);

	return 0;
}

