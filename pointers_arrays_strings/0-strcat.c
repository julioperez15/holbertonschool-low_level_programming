#include "main.h"
#include <stdio.h>
/**
 * _strcat : check the code
 * description : concatenats two strings
 * return : a pointer to the result string dest.
 */
char *_strcat(char *dest, char *src)

{
int size = 0, x;

while (dest[size])
	{
		size++;
	}

for (x = 0 ; x < size + 1 && src[x] ; x++)
	{
		dest[size] = src[x];
		size++;
	}
	return (dest);
}

