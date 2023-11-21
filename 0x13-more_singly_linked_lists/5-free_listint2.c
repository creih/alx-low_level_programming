#include "lists.h"
/**
 * free_listint2 - stes head to null
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			current = temp;
			temp = temp->next;
			free(current);
		}
		*head = NULL;
	}
}
