#include "main.h"
/**
 * print_binary - print binary nbr of n
 * @n: number to turn into binary
 */
void print_binary(unsigned long int n)
{
	unsigned int bar; 
	int bara = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar('0');
	while (bara >= 0)
	{
		bar = (n >> bara) & 1;
		_putchar(bar);
		_putchar("\n");
		bara--;
	}
}
