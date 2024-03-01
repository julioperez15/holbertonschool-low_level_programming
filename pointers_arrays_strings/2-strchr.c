#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @c : character to be located
 * @s : the string to check
 * return : a pointer to first occurrence
 */
char *_strchr(char *s, char c)
{
int i;
	for (i = 0 ; *(s + i) ; i++)
	{
		if (*(s + i) == c)
		return (s + i);
	}
	{
		if (*(s + i) == c)
		return (s + i);
	}
return (0);
}
