#include "main.h"
/**
 * jack_bauer -to print 24 hrs
 * Return: no return
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
			_putchar('\n');
			if (j == 60)
			{
				break;
			}
		}
	}
}
