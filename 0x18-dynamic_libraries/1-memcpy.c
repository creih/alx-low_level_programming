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
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
