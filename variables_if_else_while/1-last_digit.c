#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - Entry port
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d if the last digit of n is zero the string is 0\n", n);
	}
	else if (n > 5)
	{
		printf("%d if the last digit of n is grater than 5 the string and is greater than 5\n", n);
	}
	else
	{
	printf("%d if the last digit of n is less than 6 and not zero the string and is lees than 6 and not zero\n" ,n);
	}

	return (0);
}
