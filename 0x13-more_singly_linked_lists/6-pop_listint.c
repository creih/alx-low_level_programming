#include "lists,h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *iter;

	if (*head == NULL)
	{
		return (0);
	}
	iter = *head;
	*head = (*head)->next;
	free(iter);
	return ((*head)->n);
}
