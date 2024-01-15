#include <stdio.h>
/**
 * _strncpy - to copy string
 * @dest: 2nd pointer
 * @src: 1st pointer
 * @n: index to start cp from
 * Return: dest if successful
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
