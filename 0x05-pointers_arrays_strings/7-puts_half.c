#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half the string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int size = strlen(str), n;

	if (size % 2 == 0)
	{
		for (n = size / 2; n <= size; n++)
		{
			printf("%d", str[n]);
		}
	}
	else
	{
		for(n = (size - 1) / 2; n <= size; n++)
		{
			printf("%d", str[n]);
		}
	}
}
