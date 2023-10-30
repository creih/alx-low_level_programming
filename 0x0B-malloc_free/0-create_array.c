#include<stdio.h>
/**
 * create_array - creates array of chars
 * @size: size of the entered characters
 * @c: character
 * Return: nothing if it doesn't work
 */
char *create_array(unsigned int size, char c)
{
	char d;

	if (size != 0)
	{
		c = malloc(sizeof(c) * size);
		return (c);
	}
	else
	{
		return (NULL);
	}
}
