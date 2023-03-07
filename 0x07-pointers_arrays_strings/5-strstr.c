#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: pointer to word
 * @needle: pointer to subword
 * Return: pointer to occurence start
 */
char *_strstr(char *haystack, char *needle)
{
	int y, j;

	for (j = 0; needle[j] != '\0'; j++)
	{
		for (y = 0; haystack[y] != '\0'; y++)
		{
			if (needle[j] == haystack[y])
			{
				break;
			}
		}
		return (haystack);
	}
	return ('\0');
}
