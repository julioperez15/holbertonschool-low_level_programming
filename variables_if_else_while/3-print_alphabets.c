#include <stdio.h>
/**
 * main - print alphabet in capital letters
 * Return : always success
 */

int main(void)
{
	char y;
	char x;
		for (y = 'a' ; y <= 'z' ; y++)
		{
			putchar(y);
		}
		for (x = 'A' ; x <= 'Z' ; x++)
		{
			putchar(x);
		}
		{
			putchar('\n');
		}
		return (0);
}

