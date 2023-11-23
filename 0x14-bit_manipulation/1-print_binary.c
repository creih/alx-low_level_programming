#include "main.h"
/**
 * print_binary - print binary nbr of n
 * @n: number to turn into binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
