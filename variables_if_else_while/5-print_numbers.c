#include <stdio.h>

/**
 * main - print all single digit from 0
 * return : always 0
 */

int main(void)

{
	char number;

	int a = 48;
	int b = 57;
	for (number = a ; number <= b ; number++)
	{
		printf("%d\n", number);
	}
	return (0);
}
