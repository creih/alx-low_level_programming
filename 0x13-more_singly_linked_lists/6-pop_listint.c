#include "lists.h"
/**
 * pop_listint - pop first node
 * @head: pointer of list
 * returns node data
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
