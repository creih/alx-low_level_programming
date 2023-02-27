#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half the string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int size = _strlen(str), i;

	for (i = size / 2; i <= size; size++)
	{
		printf("%d", str[i]);
	}
}
