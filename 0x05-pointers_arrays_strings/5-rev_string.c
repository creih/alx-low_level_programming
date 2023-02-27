#include "main.h"
/**
 * rev_string(char *s)
 * @s: ou parameter
 * Return: void
 */
void rev_string(char *s)
{
	if (*s)
	{
		s++;
	}
	while(--*s)
	{
		_putchar(*s);
	}
}
