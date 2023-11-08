#include <stddef.h>
/**
 * array_iterator - iterates through all items of array
 * @array: array to iterate through
 * @size: size of the array
 * @action: func pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL && size > 0 && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
