#include "main.h"
#include <stdio.h>

/**
 * factorial - to return the factorial of a given number
 * @n: is a variable
 *
 * Return: integer value
 */
int factorial(int n)
{
        if (n < 0)
                return (-1);

        if (n <= 1)
                return (1);
        return (n * factorial(n - 1));
}
