#include "main.h"
/**
 * print_line - to print a line
 * @n: nbr of time to print _
 * Return: return nothing
 */
void print_line(int n)
{
	int nbr;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (nbr = 0; nbr <= n; nbr++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
