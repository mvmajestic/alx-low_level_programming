#include "lists.h"

/**
 * free_listint_safe - will free a linked list
 * @h: pointer to first node in linked list
 *
 * Return: number of elements in freed list
 */

size_t free_listint_safe(listint_t **h)

{
	size_t count = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
