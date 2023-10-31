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

	if (str == NULL)
        {
                return (NULL);
        }
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	i = 0;
	dup = malloc(sizeof(char) * size + 1);
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	dup[size] = '\0';
	return (dup);
}
