#include "lists.h"
/**
 * get_nodeint_at_index - returns ande at some index
 * @head: ptr to list
 * @index: nbr of node
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int bara = 0;
	listint_t *temp;

	temp = head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			if (bara == index)
			{
				return (temp);
			}
			temp = temp->next;
			bara++;
		}
	}
	return (NULL);
}
