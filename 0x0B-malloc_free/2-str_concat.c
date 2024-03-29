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
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	temp = size1 + size2;
	concat = malloc(sizeof(char) * temp + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	while (i < size1)
	{
		concat[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		concat[size1 + i] = s2[i];
		i++;
	}
	concat[temp] = '\0';
	return (concat);
}
