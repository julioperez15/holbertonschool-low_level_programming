#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function that print a string
 * @*s : straing to be copied.
 *
 * Return : 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
