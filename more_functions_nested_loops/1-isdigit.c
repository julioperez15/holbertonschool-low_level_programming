#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 *
 * Return: 1 for chatacter that will be a digit or 0 for any else
 */

int _isdigit(int c)

{
	if (c>= 48 && c<=57)
	{
		return (1);
	}
	return (0);
}
