#include "lists.h"
/**
 * reverse_listint - does a backwards linked list
 * @head: ptr to list
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL, *post;

	while (*head != NULL)
	{
		post = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = post;
	}
	*head = prev;
	return (*head);
}
