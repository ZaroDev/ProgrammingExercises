//05. Write a program that asks for a character and determines if is a vowel a consonant or none of them.

#include <stdio.h>

int main()
{
	char letter = 0;

	printf("Introduce your character: ");
	scanf("%c", &letter);
	getchar();

	if (letter == 65 || letter == 69 || letter == 73 || letter == 79 || letter == 85 || 
		letter == 97 || letter == 101 || letter == 105 || letter == 111 || letter == 117)
	{
		printf("Your character is vowel");
	}
	else if (((letter >= 65) && (letter <= 90)) || ((letter >= 97) && (letter <= 122)))
	{
		printf("Your character is a consonant");
	}
	else printf("Your character is not a vowel or a consonant");

	return 0;
}