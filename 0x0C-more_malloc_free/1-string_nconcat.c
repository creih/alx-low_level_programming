#include<stdlib.h>
/**
 * string_nconcat - adds n chars of s2 to s1
 * @s1: string to add on
 * @s2: string to add from
 * @n: amunt of chars to add to s1 from s2
 * Return: pointer to new memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, i = 0, k = 0;
	char *mem;

	if (s1 == NULL)
	{
		s1 = "";
		size1 = sizeof(s1);
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		size1 = sizeof(s1);
	}
	mem = malloc(size1 + n + 1);
	if (!mem)
	{
		return (NULL);
	}
	while (i < size1)
	{
		mem[i] = s1[i];
		i++;
	}
	while (i < size1 + n)
	{
		if (size1 + k < size1 + n)
		{
			mem[i] = s2[k];
		}
		k++;
		i++;
	}
	mem[size1 + n + 1] = '\0';
	return (mem);
}
