#include "main.h"
/**
 * _strlen -function to printlength
 * @s: character to be used
 * Return: 0 if true
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
