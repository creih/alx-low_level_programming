#include "main.h"
/**
 * _strcmp - to compare strings
 * @s1: string_1
 * @s2: string_2
 * Return: n difference for success
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == '\0')
	{
		return (-s2[i]);
	}
	else if (s2[i] == '\0')
	{
		return (s1[i]);
	}
	else
	{
		return (0);
	}
}
