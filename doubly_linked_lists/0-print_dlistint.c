#include "lists.h"
/**
 * dlistint_t - print all the element of a linked list
 * @h: linked list of type const
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        int nodes = 0;

        for (; h != NULL; h = h->next, nodes++)
                printf("%i\n", h->n);
        return (nodes);
}
