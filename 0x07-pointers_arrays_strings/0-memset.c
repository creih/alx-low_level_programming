#include "main.h"
/**
 * _memset -to return address of constant
 * @s: pointer_1
 * @b: char constant
 * @n: unsigned param
 * Return: pointer to the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (n = 0; s[n] != '\0'; n++)
	{
		s = &b;
	}
	return (s);
}
