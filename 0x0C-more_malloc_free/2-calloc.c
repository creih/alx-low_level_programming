#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 * Return: Pointer to the allocated memory or NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;

	memory = malloc(nmemb * sizeof(size));
	if (!memory)
	{
		return (NULL);
	}
	memory = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
}
