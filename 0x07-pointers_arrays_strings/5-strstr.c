#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: pointer to word
 * @needle: pointer to subword
 * Return: pointer to occurence start
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, j;

	for (j = 0; needle[j] = '\0'; j++)
	{
		for (i = 0; haystack[i] = '\0'; i++)
		{
			if (needle[j] == haystack[i])
			{
				break;
			}
		}
		return (haystack[i]);
	}
	return ('\0');
}
