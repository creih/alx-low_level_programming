#include "lists.h"
/**
 * print_listint_safe - prints no loop
 * @head: ptr to list
 * Return counter
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tort, *har;
	size_t counter = 0;

	if (head == NULL)
	{
		exit(98);
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
			tort = head;
			while (tort != har)
			{
				printf("[%p] %d\n", (void *)tort, tort->n);
				tort = tort->next;
				har = har->next;
				counter++;
			}
			break;
		}
	}
	return (counter);
}
