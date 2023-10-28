#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The string to check
 * Return: 1 if it's a positive number, 0 if not
 */
int is_positive_number(const char *str)
{
	while (*str)
	{
	if (!isdigit(*str))
		return (0);
		str++;
	}
	return (1);
}

