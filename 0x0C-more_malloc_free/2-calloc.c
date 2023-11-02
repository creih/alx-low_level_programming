#include<stdlib.h>
#include<stdio.h>
/**
 * _calloc - allocate memory for array
 * @nmemb: elements of array
 * @size: size of array
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *point = malloc(size * nmemb);

	if (point == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		retun (NULL);
	}
	printf(point);
}
