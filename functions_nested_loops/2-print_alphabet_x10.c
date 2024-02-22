#include "main.h"

/**
 * main - check the function.
 *
 * Return: Always 0
 */
void print_alphabet_10x(void)
{
	char c;
	int i;

	for(i = 0 ; i < 10 ; i++)
   {
	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
   }
}
