#include "main.h"
/**
 * _strspn -to check prefix present
 * @s: initial segment
 * @accept: other segment
 * Return: nbr of success
 */
unsigned int _strspn(char *s, char *accept)
{
	int n_1, n_2;
	int success = 0;

	for (n_1 = 0; s[n_1] != '\0'; n_1++)
	{
		for (n_2 = 0; accept[n_2] != '\0'; n_2++)
		{
			if (accept[n_2] == s[n_1])
			{
				success++;
				break;
			}
		}
	}
	return (success);
}
