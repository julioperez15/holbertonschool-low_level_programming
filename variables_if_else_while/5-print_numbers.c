#include <stdio.h>

/**
 * main - print all single digit from 0
 * return : always 0
 */

int main(void)

{
	char number;

	int a = 0;
	int b = 9;

	for (number = a ; number <= b ; number++)
	{
		printf("%d", number);
	}
		printf("\n");
	return (0);
}
