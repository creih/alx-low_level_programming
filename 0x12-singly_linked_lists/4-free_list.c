#include "lists.h"
/**
 * free_list - frees as the name suggests
 * @head: pointer to start
 * Return: nil
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
