#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * function - a program that print his name
 * @argc : number of agumets
 * @argv : argument vector pointer to the string
 * Return : 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
