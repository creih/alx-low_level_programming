#include "lists.h"
/**
 * sum_dlistint - sum of data (n) of a dlistint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all in the list, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int teranya = 0;

	while (head != NULL)
	{
		teranya += head->n;
		head = head->next;
	}
	return (teranya);
}
