#include "main.h"
/**
 * more_numbers - for printing square made of nums
 * Return: none
 */
void more_numbers(void)
{
	int line, numbers;

	for (line = 0 ;line <= 10; line++)
	{
		for (numbers = 0; numbers<=14; numbers++)
		{
			_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
