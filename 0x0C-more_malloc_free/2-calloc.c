#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - array mem loc
 * @nmemb: elements
 * @size: how long ne is
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i = 0, total_size;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
}
