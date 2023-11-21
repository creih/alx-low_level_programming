#include "lists.h"
/**
 * listint_len - counts linked list nodes
 * @h: the ptr to the list
 * Return: 0 for fail nbr of nodes on success
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	if (h)
	{
		const listint_t *temp;

		temp = h;
		while (temp)
		{
			counter++;
			temp = temp->next;
		}
		return (counter);
	}
	return (0);
}
