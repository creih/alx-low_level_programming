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
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
