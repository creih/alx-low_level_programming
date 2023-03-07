#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -calc sum of diagonals
 * @a: first param pointer
 * @size: of array
 */
void print_diagsums(int *a, int size)
{
	int beg = 0, last = 0, x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (x == y)
			{
				beg += *(a + x * size + x); 
			}
			if ((x + y) == (size-1))
			{
				last += *(a + x * size + (size - 1 - x));
			}
		}
	}
	printf("%d, %d", x, y);
	printf("\n");
}
