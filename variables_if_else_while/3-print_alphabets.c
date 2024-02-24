#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print alphabet in capital letters
* Return : always success
*/

int main(void)

{
char x;

for (x = 'a' ; x <= 'z' ; x++)
putchar(x);

for (x = 'A' ; x <= 'Z' ; x++)
putchar(x);
putchar('\n');

return (0);
}

