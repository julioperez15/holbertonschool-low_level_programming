#include <stdio.h>

/**
 * main - print all sigle digits from 0.
 * return : always 0.
 */

int main(void)

{
	short number;

		for (number = 48 ; number <= 57 ; number++)
		{
			putchar(number + '0');
			putchar('\n');
		}
		return (0);
}
