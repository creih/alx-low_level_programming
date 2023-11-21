#include "lists.h"
/**
 * add_nodeint - add a node at beginning
 * @head: ptr to beginning  of list
 * @n: nbr to add
 * Return: list or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		listint_t  *temp = malloc(sizeof(listint_t));

		if (temp == NULL)
		{
			return (NULL);
		}
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (*head);
	}
}
