#include "lists.h"
/**
 * print_list - print elements of the list
 * @h: pointer to head of list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}
