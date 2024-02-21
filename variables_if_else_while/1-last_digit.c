#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry port
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last_digit = n %10;
	if (n == 0)
	{
	printf("last digit of %d is 0 and is 0\n", n);
	}
	else if (n > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else
	{
	printf("last digit of %d is %d and is lees than 6 and not 0\n", n, last_digit);
	}

	return (0);
}
