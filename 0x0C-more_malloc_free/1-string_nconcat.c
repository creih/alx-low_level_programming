#include <stdlib.h>
/**
 * string_nconcat - adds n chars of s2 to s1
 * @s1: string to add on
 * @s2: string to add from
 * @n: amunt of chars to add to s1 from s2
 * Return: pointer to new memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size = 0, i = 0, k = 0;
	char *mem;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size] != '\0')
	{
		size++;
	}
	while (s2[i] != '\0')
	{
		i++;
	}
	if (n >= i)
	{
		n = i;
	}
	mem = malloc(size + n + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	while (k < size)
	{
		mem[k] = s1[k];
		k++;
	}
	k = 0;
	while (k < n)
	{
		mem[k + size] = s2[k];
		k++;
	}
	mem[size + n] = '\0';
	return (mem);
}
