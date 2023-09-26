#include "lists.h"

/**
 * pop_listint - will delete head node of inked list
 * @head: pointer to first element in the list
 *
 * Return: data inside elements that was deleted,
 * or 0 if list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
