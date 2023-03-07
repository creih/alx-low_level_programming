#include "main.h"
/**
 * *_memcpy - to cpywith pointer
 * @dest: where we' ll copy
 * @src: where the og is
 * @n: size of string
 * Return: copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
