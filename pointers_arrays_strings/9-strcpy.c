#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - to copy the string pointed to
 *@src : the string pointed
 *@dest : the buffer pointed
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
        int i;

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }

        dest[i++] = '\0';

        return (dest);
}
