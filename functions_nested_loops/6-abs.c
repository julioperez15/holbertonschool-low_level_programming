#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main : check the code.
 * description : compute absolute value of a integer.
 * return : absolute num.
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = num * (-1);
	}
	return(num);
}
