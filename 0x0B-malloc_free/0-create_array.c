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
	unsigned int i = 0;

	if (size != 0)
	{
		d = malloc(sizeof(char) * size);
		while (i < size)
		{
			d[i] = c;
		}
		return (d);
	}
	else
	{
		return (NULL);
	}
}
