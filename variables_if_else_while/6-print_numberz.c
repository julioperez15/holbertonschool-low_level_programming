#include <stdio.h>

/**
 * main - print all sigle digits from 0.
 * return : always 0.
 */

int main(void)

{
	int number;

		for (number = 30 ; number <= 39 ; number++)
		{
			putchar(number + '0');
			putchar('\n');
		}
		return (0);
}
