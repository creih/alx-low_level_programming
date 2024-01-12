#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all nodes' data
 * @h: ponter to the nodes
 * Return: data in nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t umubare = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		umubare++;
	}
	return (umubare);
}
