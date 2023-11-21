#include "lists.h"
/**
 * find_listint_loop - finds the start loop in a linked list
 * @head: ptr to list
 * Return: address ofstart of loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *har;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	tort = head->next;
	har = head->next->next;
	while (har && har->next)
	{
		if (tort == har)
		{
			tort = head;
			while (tort != har)
			{
				tort = tort->next;
				har = har->next;
			}
			return (tort);
		}
		tort = tort->next;
		har = har->next->next;
	}
	return (NULL);
}
