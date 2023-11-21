#include "lists.h"
/**
 * print_listint - for printing lists
 * @h: ptr to lists
 * Return : size of the list
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (h != NULL)
	{
		const listint_t *temp;

		temp = h;
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			counter++; 
		}
		return (counter);
	}
	return (0);
}
