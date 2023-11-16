#include "lists.h"
/**
 * add_node_end - add node at list end
 * @head: pointer to beginning
 * @str: str to duplicate
 * Return: address of newelementa
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
