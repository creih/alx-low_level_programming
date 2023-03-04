#include "main.h"
/**
 * leet - using_1337
 * @c: parameter for leet()
 * Return: final 1337_sting
 */
char *leet(char *c)
{
	char *alias = "0011334477";
	char *letters = "OoLlEeAaTt";
	int n1, n2;

	n1 = 0;
	while (c[n1] != '\0')
	{
		for (n2 = 0; letter[n2] != '\0'; n2++)
		{
			if (c[n1] == letter[n1])
			{
				c[n1] =letters[n2];
			}
		}
		n1++
	}
	return (c);
}
