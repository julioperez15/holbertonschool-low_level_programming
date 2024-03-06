#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer to a space in memory
 * @*str : pointer to be returned
 * Return : NULL if str = NULL 
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *x;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
		i++;
	x = malloc(i * sizeof(char));
	if ( x == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j < i ; j++)
	{
		x[j] = str[j];
	}
	return (x);
}



