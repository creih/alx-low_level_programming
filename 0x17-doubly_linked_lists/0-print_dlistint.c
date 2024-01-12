#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all nodes' data
 * @h: ponter to the nodes
 * Return: data in nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *evolve = h;
	size_t umubare = 0;

	while (evolve != NULL)
	{
		printf("%d\n", evolve->n);
		evolve = evolve->next;
		umubare++;
	}
	return (umubare);
}
