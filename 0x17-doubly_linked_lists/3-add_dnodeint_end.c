#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_nshya, *temp;

	if (head == NULL)
		return (NULL);
	node_nshya = malloc(sizeof(dlistint_t));
	if (node_nshya == NULL)
		return (NULL);
	node_nshya->n = n;
	node_nshya->next = NULL;
	if (*head == NULL)
	{
		node_nshya->prev = NULL;
		*head = node_nshya;
		return (node_nshya);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node_nshya;
	node_nshya->prev = temp;
	return (node_nshya);
}
