#include "lists.h"


/**
 * dlistint_len - will count number of elements in linked dlistint_t list.
 * @h: head of dlistint_t list.
 *
 * Return: number of elements in dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)

{
	size_t nodes = 0;
    
    while (h)
    {
	    nodes++;
	    h = h->next;
    }
    return (nodes);
}
