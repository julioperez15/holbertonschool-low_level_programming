#include "main.h"
/**
 * main : check the code.
 * description : a function that checks for alphabetic char.
 * return : 1 if is a letter, upper or lower, and 0 anything else.
 */

int _isalpha(int c)
{
if (c > 'a' && c < 'z')
return (1);
if (c > 'A' && c < 'Z')
return (1);
else
return (0);
}
