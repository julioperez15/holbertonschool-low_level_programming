#include "main.h"
#include <stdio.h>
/**
 * _strlen : return the length of a string.
 * @i : first string
 * return : always 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
