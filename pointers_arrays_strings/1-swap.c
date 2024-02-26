#include "main.h"
#include <stdio.h>
/**
 * main : check the code.
 * description : function that swaps the values of two integers.
 * return : always 0
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
