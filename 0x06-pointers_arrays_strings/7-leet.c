#include "main.h"
/**
 * leet - vowels to other chars
 * @c: param pointer
 * Return: those changes
 */
char *leet(char *c)
{
	int nbr = 0;

	while (c[nbr])
	{
		if (c[nbr] == 'a' || c[nbr] == 'A')
		{
			c[nbr] = '4';
		}
		else if (c[nbr] == 'e' || c[nbr] == 'E')
		{
			c[nbr] = '3';
		}
		else if (c[nbr] == 'o' || c[nbr] == 'O')
		{
			c[nbr] = '0';
		}
		else if (c[nbr] == 't' || c[nbr] == 'T')
		{
			c[nbr] = '7';
		}
		else if (c[nbr] == 'l' || c[nbr] == 'L')
		{
			c[nbr] = '1';
		}
		else
		{
			c[nbr] = c[nbr];
		}
		nbr++;
	}
	return (c);
}
