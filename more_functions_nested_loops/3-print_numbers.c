#include "main.h"

/**
 * void print_numbers(void) : this function will prints numbers from 0 to 9
 * @x : variable
 * Return : always return 0
 **/

void print_numbers(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)

	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
