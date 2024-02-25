#include <stdio.h>
/**
 * main - print the alphabet in reverse
 * Return : always success
 */

int main(void)

{
	char x;

for (x = 'z' ; x >= 'a' ; x--)
{
putchar(x);
}
putchar('\n');

return (0);
}

