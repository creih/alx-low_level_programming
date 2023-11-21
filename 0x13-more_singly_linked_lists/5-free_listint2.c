#include "lists.h"
/**
 * free_listint2 - stes head to null
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		*head = NULL;
	}
	else
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
}
