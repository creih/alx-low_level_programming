#include "main.h"
/**
 * print_array -print array elements
 * @n: nbr of elements of array
 * @*a: array name
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(*a);
	}
}
