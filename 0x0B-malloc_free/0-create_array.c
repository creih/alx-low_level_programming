#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size of the entered characters
 * @c: character
 * Return: nothing if it doesn't work
 */
char *create_array(unsigned int size, char c)
{
	char *d;

	if (size != 0)
	{
		d = malloc(sizeof(char) * size);
		d[0] = c;
		return (d);
	}
	else
	{
		return (NULL);
	}
}
