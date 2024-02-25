#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
/**
 * main : check codes.
 * description : print the sing of a number.
 * return : 1 if the number is +, 0 if is 0, and -1 if is -.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
