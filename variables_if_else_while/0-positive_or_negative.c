#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -Entry point
*
* Return: Aways 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d if the number is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d if the number is geater than zero\n", n);
	}
	else
	{
		printf("%d if the number is less than zero\n", n);
	}
	return (0);
}
