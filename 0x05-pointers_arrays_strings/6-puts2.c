#include "main.h"
/**
 * puts2 -prints 2nd chars
 * @str: parameter to use
 * Return: none
 */
void puts2(char *str)
{
	char *current;
	if (*str++)
	{
		current = str + 2;
		_putchar(*current);
		str = current;
	}
}
