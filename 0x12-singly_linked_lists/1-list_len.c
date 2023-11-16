#include "lists.h"
/**
 * list_len - return elements counter
 * @h: pointer to head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
