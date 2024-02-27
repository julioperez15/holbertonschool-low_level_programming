#include "main.h"
#include <stdio.h>
/**
 * _puts : print a string in reverse
 * @str : string to print
 *
 * return : always 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
			i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}

