#include "main.h"
/**
 * cap_string - make 1st string cap
 * @c: param pointer
 * Return: none
 */
char *cap_string(char *c)
{
	int y;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] = c[0] - ('a' - 'A');
	}
	for (y = 1; c[y] != '\0'; y++)
	{
		if (c[y - 1] == ' ' || c[y - 1] == '\t')
		{
			if (c[y] >= 'a' && c[y] <= 'z')
			{
				c[y] = c[y] - ('a' - 'A');
			}
		}
		if (c[y - 1] == '\n' || c[y - 1] == ',')
		{
			if (c[y] >= 'a' && c[y] <= 'z')
			{
				c[y] = c[y] - ('a' - 'A');
			}
		}
		if (c[y - 1] == ';' || c[y - 1] == '.')
		{
			if (c[y] >= 'a' && c[y] <= 'z')
			{
				c[y] = c[y] - ('a' - 'A' );
			}
		}
		if (c[y - 1] == '!' || c[y - 1] == '?')
		{
			if (c[y] >= 'a' && c[y] <= 'z')
			{
				c[y] = c[y] - ('a' - 'A');
			}
		}
		if (c[y - 1] == '"' ||  c[y - 1] == '(')
		{
			if (c[y] >= 'a' && c[y] <= 'z')
			{
				c[y] = c[y] - ('a' - 'A');
			}
		}
		if (c[y -1] == ')')
		{
			if (c[y] >= 'a' && c[y] <= 'z')
			{
				c[y] = c[y] - ('a' - 'A');
			}
		}
	}
	return (c);
}
