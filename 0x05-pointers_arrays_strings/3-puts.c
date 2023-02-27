#include "main.h"
/**
 * _puts - will print all chrs of the string
 * @*s: will be the parameter of file
 * Return: none
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		*str++
	}
	_putchar('\n');
}
