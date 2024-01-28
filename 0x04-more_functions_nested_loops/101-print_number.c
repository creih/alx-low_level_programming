#include "main.h"
/**
 * print_number - prints a number using putchar
 * @n: the nbr to print
 */
void print_number(int n)
{
	int a;

	while (n != 0)
	{
		a = n % 10;
		_putchar(n);
		_putchar(a);
	}
}
