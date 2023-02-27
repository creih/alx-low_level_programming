#include "main.h"
/**
 * print_rev - will print from backwards
 * @s: will be our parameter
 * Return: (none)
 */
void print_rev(char *s)
{
	int jump, size = _strlen(*s);

	for (jump = 0; jump < size; jump++)
	{
		swap_int(*s[jump], *s[size - jump - 1]);
		_putchar(*s);
	}
}
