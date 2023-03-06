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
	char *new = s;

	for (n = 0; new[n] != '\0'; n++)
	{
		s = &b;
	}
	return (new);
}
