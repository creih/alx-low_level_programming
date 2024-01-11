#include <stdio.h>
#include <string>
/**
 * wildcmp_recursive - to compare 2 strings
 * @s1: string check from
 * @s2: string checks with
 * Return: 0 for success.
 */

int wildcmp_recursive(char *s1, char *s2)
{
	int i = 0;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
		if (s1[i] == s2[i])
		{
			return (wildcmp_recursive(s1, s2 + 1) || wildcmp_recursive(s1 + 1, s2));
		}
		if (*s1 == *s2 || *s2 == '?')
		{
			return (wildcmp_recursive(s1 + 1, s2 + 1));
		}
		return (0);
}

/**
 * wildcmp - calls the latter function simply
 * @s1: string to check from
 * @s2: string to check with
 * Return: 0 for success.
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}
