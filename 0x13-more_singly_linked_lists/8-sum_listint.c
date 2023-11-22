#include "lists.h"
/**
 *
 *
 *
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int igiteranyo = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		igiteranyo += temp->n;
		temp = temp->next;
	}
	return (igiteranyo);
}
