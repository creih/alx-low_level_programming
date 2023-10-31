#include<stdlib.h>
/**
 * str_concat - adds 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: added string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, size1 = 0, size2 = 0, temp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1[i] != '\0')
	{
		size1++;
		i++;
	}
	i = 0;
	if (s2[i] != '\0')
	{
		size2++;
		i++;
	}
	temp = size1 + size2;
	concat = malloc(sizeof(char) * temp + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size1)
	{
		concat[i] = s1[i];
		i++;
	}
	size2 = i;
	i = 0;
	while (size2 < temp)
	{
		concat[size2] = s2[i];
		size2++;
		i++;
	}
	if (size2 == temp)
	{
		concat[size2] = '\0';
	}
	return (concat);
}
