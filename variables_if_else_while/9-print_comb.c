#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main : check code
 * description : print comb of sigle digits and comas
 * return : always 0
 */

int main(void)
{
	int numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		putchar(numbers);
	if (numbers != '9')
		{
		putchar(",");
		putchar(" ");
		}
	}
	putchar('\n');
	return (0);
}
