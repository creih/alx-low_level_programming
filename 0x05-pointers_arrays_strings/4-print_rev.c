#include "main.h"
/**
 * print_rev - will print from backwards
 * @s: will be our parameter
 * Return: (none)
 */
void print_rev(char *s)
{
	while (*s++)
	{
		s++;
	}
	while (--*s)
	{
		_putchar(*s);
		s--;
	}
}
