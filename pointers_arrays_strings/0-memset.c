#include <stdio.h>
#include "main.h"
/**
 * _memset - fill memosy with a constant byte
 * @s : memory space to be filled
 * @b : bite to fill with
 * @n : number of space to be filled
 *
 * return : pointer to memory to filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
