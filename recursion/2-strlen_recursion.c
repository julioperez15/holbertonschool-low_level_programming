#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - to return the length of a string
 * @s: is a variable
 *
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
        if (*s == '\0')
        {
                return (0);
        }

        s++;
        return (_strlen_recursion(s) + 1);
}
