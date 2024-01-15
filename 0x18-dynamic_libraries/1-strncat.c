#include "main.h"
/**
 * _strncat - concate from n index
 * @src: first string
 * @dest: second string
 * @n: concatenation point
 * Return: dest if true
 */
char *_strncat(char *dest, char *src, int n)
{
	int num_1, num_2;

	for (num_1 = 0; dest[num_1] != '\0'; num_1++)
	{
		;
	}
	for (num_2 = 0; num_2 < n && src[num_2] != '\0'; num_2++)
	{
		dest[num_1 + num_2] = src[num_2];
	}
	dest[num_1 + num_2] = '\0';	
	return (dest);
}	
