#include "lists.h"
/**
 *
 *
 *
 *
 */
size_t print_listint_safe(const listint_t **head)
{
	const listint_t *tort, har;
	size_t counter = 0;

	if (har && har->next)
	{
		exit(99);
	}
	tort = har = head;
	while (har && har->next)
	{
		printf("[%p] %d\n", (void *)tort, tort->n);
		counter++;
		tort = tort->next;
		har = har->next->next;
		if (tort == har)
		{
			printf("-> [%p] %d\n", (void *)tort, tort->n);
			break;
		}
	}
	return (counter);
}
