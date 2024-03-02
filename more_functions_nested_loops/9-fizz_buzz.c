#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz
 * Return : Always 0
 */

int main()

{
	int m;

	for (m = 1 ; x <= 100 ; m++)
	{
		if ((m % 3 == 0) && (m % 5 == 0))
		{
			printf("FizzBuzz\n");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", m);
		}
	}
	return (0);
}

