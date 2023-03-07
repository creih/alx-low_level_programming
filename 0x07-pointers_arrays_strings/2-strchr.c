#include "main.h"
/**
 * _strchr -locate a char
 * @s: pointer to sth
 * @c: char to locate
 * Return: address of c else null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
