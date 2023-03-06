#include "main.h"
/**
 * _strpbrk - locate occurence in s
 * @s: initial pointer
 * @accept: checking pointer
 * Return: pointer t success
 */
char *_strpbrk(char *s, char *accept)
{
	char *match;
	int n_1, n_2, n = 0;

	match = '\0';
	for (n_1 = 0; s[n_1] != '\0'; n_1++)
	{
		for (n_2 = 0; accept[n_2] != '\0'; n_2++)
		{
			if (s[n_1] == accept[n_2])
			{
				match[n] = s[n_1];
				n++;
				break;
			}
		}
	}
	return (match);
}
