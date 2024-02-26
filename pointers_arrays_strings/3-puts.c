#include "main.h"
#include <stdio.h>
/**
 * _puts : print a string
 * @str : string to print
 *
 * return : always 0
 */

void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
