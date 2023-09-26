#include "lists.h"

/**
 * print_listint - will print all elements of linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
