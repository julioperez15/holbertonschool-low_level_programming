#include "main.h"
#include <stdio.h>
/**
 * main : check the code.
 * description : return the length of a string.
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
