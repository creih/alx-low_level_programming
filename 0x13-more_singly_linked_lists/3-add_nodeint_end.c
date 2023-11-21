#include "lists.h"
/**
 * add_nodeint_end - adding from the end of a list
 * @head: pointer to beginnig of list
 * @n: actual int to add
 * Return: address of last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	if (*head == NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
		{
			return (NULL);
		}
		node->n = n;
		node->next = NULL;
		*head = node;
		return (node);
	}
	temp = *head;
	if (temp->next == NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
		{
			return (NULL);
		}
		node->n = n;
		node->next = NULL;
		temp->next = node;
		return (node);
	}
	return (add_nodeint_end(&(temp->next), n));
}
