#include "main.h"
/**
 * times_table - to print multiplications table
 * Return: there is none
 */
void times_table(void)
{
	int x, y;
	for (x =0; x <=9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar(x * y);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
