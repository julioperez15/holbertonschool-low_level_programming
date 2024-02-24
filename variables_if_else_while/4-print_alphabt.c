#include <stdio.h>

/**
 * main - print alphabet lowcase except q and e
 * return : always 0
 */

int main(void)

{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	while (x != 'q' && x != 'e')
	{
		putchar('\n');
	}
	return (0);
}
