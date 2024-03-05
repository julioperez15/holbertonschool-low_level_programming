#include "main.h"
#include <stdio.h>
/**
 * function - Write a program that prints all arguments it receives.
 * @argc : the number of arguments in a sring
 * @argv : the argument vector of a pointer
 *
 * Return : 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return(0);
}
