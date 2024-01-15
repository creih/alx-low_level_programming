#include "main.h"
/**
 * *_strcat - concat 2 strings
 * @dest: 2nd string
 * @src: 1st string
 * Return: cat string if true
 */
char *_strcat(char *dest, char *src)
{
	int index_1, index_2;

	for (index_1 = 0; dest[index_1] != '\0'; index_1++)
	{
		;
	}
	for (index_2 = 0; src[index_2] != '\0'; index_2++)
	{
		dest[index_2 + index_1] = src[index_2];
	}
	dest[index_1 + index_2] = '\0';
	return (dest);

}
