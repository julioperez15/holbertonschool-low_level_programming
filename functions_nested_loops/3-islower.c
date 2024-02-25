#include "main.h"
/**
 * main - check the code.
 *
 * Return: 1 if is lower case, return 0 is someting else.
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	return (1);
	else
	return (0);
}
