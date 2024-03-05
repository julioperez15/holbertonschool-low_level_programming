#include "main.h"
#include <stdio.h>
/**
 * function - a program that print the number of arguments
 * @argc : number of aguments in a string
 * @argv : argument vectors in a string
 *
 * Return : 0
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[0]);
	printf("%d\n", argc);
	return (0);
}
