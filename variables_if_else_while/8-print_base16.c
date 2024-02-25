#include <stdio.h>

/**
 * main - print all sigle digits from 0.
 * return : always 0.
 */

int main(void)

{
	int number;
	char letters;

		for (number = 0 ; number <= 10 ; number++)
		{
			putchar((number % 10) + '0');
		}
		for (letters = 'a' ; letters <= 'f' ; letters++)
		{
			putchar(letters);
		}
		putchar('\n');
		return (0);
}

