#include "lists.h"
/**
 * free_listint - frees allocated memory for list
 * @head: ptr to list to be freed
 * @Return: void
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		listint_t *temp;

		temp = head;
		head = temp->next;
		temp = NULL;
	}
}
