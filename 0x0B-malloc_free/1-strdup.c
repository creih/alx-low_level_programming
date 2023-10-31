#include<stdlib.h>
/**
 * sdup - return a copy of str parameter
 * @str: original string
 * Return: Null if str non existant
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dup = malloc(sizeof(str));

	if (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	else
	{
		return (NULL);
	}
	return (dup);
}
