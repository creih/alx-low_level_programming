#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_nshya, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	node_nshya = malloc(sizeof(dlistint_t));
	if (node_nshya == NULL)
		return (NULL);
	node_nshya->n = n;
	node_nshya->prev = NULL;
	node_nshya->next = NULL;
	if (idx == 0)
	{
		node_nshya->next = *h;
		if (*h != NULL)
			(*h)->prev = node_nshya;
		*h = node_nshya;
		return (node_nshya);
	}
	temp = *h;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(node_nshya);
		return (NULL);
	}
	node_nshya->next = temp->next;
	node_nshya->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = node_nshya;
	temp->next = node_nshya;
	return (node_nshya);
}
