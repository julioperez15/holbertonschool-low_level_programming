#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet lowcase except q and e
 * return : always 0
 */

int main(void)

{
	char x, q, e;
	q = 'q';
	e = 'e';

	for (x = 'a' ; x <= 'z' ; x++)
	{
	if  (x != q && x != e)
	putchar(x);
	}
	putchar('\n');
	return (0);
}
