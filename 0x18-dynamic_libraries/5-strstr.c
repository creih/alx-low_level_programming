#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: pointer to word
 * @needle: pointer to subword
 * Return: pointer to occurence start
 */
char *_strstr(char *haystack, char *needle)
{
	int y = 0, j;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		while (needle[y] != '\0')
		{
			if (needle[y] != haystack[j + y])
			{
				break;
			}
			y++;
		}
		if (needle[y] == '\0')
		{
			return (&haystack[j]);
		}
	}
	return ('\0');
}
