#include "main.h"
/**
 * puts2 -prints 2nd chars
 * @str: parameter to use
 * Return: none
 */
void puts2(char *str)
{
	char *current;

	while (*str)
	{
		if (--!*str)
		{
			_putchar(str);
		}
		else
		{
			current = str + 2;
			_putchar(*current);
		}
		str = current;
	}
}
