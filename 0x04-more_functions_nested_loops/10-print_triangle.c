#include "main.h"
/**
 * print_triangle -right 90_def angle
 * @size: parameter
 */
void print_triangle(int size)
{
	int n, x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (n = 0; n < size - 1; n++)
			{
				_putchar(' ');
			}
			for (y = 0; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
