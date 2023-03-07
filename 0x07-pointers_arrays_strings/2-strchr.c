#include "main.h"
/**
 * _strchr -locate a char
 * @s: pointer to sth
 * @c: char to locate
 * Return: address of c else null
 */
char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
