#include <stdlib.h>
/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum value
 * @max: The maximum value
 * Return: Pointer to newly created array or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
