#include "main.h"
/**
 * print_diagonal - prints oblique line
 * @n: parameter to count
 * Return: (0)if true
 */
void print_diagonal(int n)
{
	int count = 0, x;

	while (n > 0)
	{
		x = count;
		while (x > 0)
		{
			_putchar(' ');
			x--;
		}
		_putchar('\\');
		_putchar('\n');
		count++;
		n--;
	}
	if (count < 1)
	{
		_putchar('\n');
	}
}
