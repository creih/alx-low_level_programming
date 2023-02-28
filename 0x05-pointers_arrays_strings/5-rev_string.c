#include "main.h"
/**
 * rev_string - to revrse
 * @s: ou parameter
 * Return: void
 */
void rev_string(char *s)
{
	char *c;
	int i, size = 0;

	c = s;
	while (*c)
	{
		size++;
		c++;
	}
	for (i = 0; i < size; i++)
	{
		--c;
		_putchar(*c);
	}
}
