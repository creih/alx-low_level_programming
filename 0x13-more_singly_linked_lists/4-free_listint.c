#include "lists.h"
/**
 * free_listint - frees allocated memory for list
 * @head: ptr to list to be freed
 * @Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
