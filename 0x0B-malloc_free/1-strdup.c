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

	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	dup = malloc(sizeof(char) * size);
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
