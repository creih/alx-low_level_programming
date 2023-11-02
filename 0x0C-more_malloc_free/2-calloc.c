#include<stdlib.h>
/**
 * _calloc - allocate memory for array
 * @nmemb: elements of array
 * @size: size of array
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *point, i = 0;

	if (nmemb == 0 || size == 0)
	{
		retun (NULL);
	}
	point = malloc(nmemb * size);
	if (point == NULL)
	{
		return (NULL);
	}
	while (point[i])
	{
		point[i] = 0;
		i++;
	}
}
