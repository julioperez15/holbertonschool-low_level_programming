#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects correct function
 * @s: character array of operation to check
 *
 * Return: index of element or -1
 */
int (*get_op_func(char *s))(int, int)
{
        op_t ops[] = {
                {"+", op_add},
                {"-", op_sub},
                {"*", op_mul},
                {"/", op_div},
                {"%", op_mod},
                {NULL, NULL}
        };
        int i;

        i = 0;
        while (ops[i].op != ops[5].op)
        {
                if (strcmp(ops[i].op, s) == 0)
                        return (ops[i].f);
                i++;
        }
        return (NULL);
}
