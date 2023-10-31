#include<stdlib.h>
/**
 * _strdup - return a copy of str parameter
 * @str: original string
 * Return: Null if str non existant
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *dup;

	if (str[i] != '\0')
	{
		size++;
		i++;
	}
	else
	{
		return (NULL);
	}
	i = 0;
	dup = malloc(sizeof(str) * size);
	while (i < size)
	{
		dup[i] = str[i];
		i++
	}
	return (dup);
}
