#include "lists.h"

/**
 * listint_len - will return number of elements in linked lists
 * @h: linked list type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
