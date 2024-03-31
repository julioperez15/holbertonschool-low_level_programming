#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, i = 0, mult = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	if (b[i] == '0' || b[i] == '1')
		i++;
	else 
		return (0);
	for (; i ; i--)
	{
		if (b[i - 1] == '1')
			count += mult;
		mult *= 2;
	}
	return (count);
}
