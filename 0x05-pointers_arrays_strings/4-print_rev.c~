#include "main.h"
/**
 * print_rev - will print from backwards
 * @s: will be our parameter
 * Return: (none)
 */
void print_rev(char *s)
{
	char *c;
	int i, size = 0;
       
	c = s;
	while(*s)
	{
		size++;
		c++;
		s++;
	}
	for (i = 0; i < size; i++)
	{
		--c;
		_putchar(*c);
	}
	_putchar('\n');
}
