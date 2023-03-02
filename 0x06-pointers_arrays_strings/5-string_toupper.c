#include "main.h"
/**
 * string_toupper -turn to uppercase
 * @c: param pointer
 * Return: char in upcase
 */
char *string_toupper(char *c)
{
	int in;

	for (in = 0; c[in] != '\0'; in++)
	{
		if (c[in] >= 'a' && c[in] <= 'z')
		{
			c[in] = c[in] - ('a' - 'A');
		}
	}
	return (c);
}
