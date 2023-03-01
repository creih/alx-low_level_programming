#include "main.h"
/**
 * *_strcat - concat 2 strings
 * @dest: 2nd string
 * @src: 1st string
 * Return: cat string if true
 */
char *_strcat(char *dest, char *src)
{
	int i, count_s = 0, count_d = 0;
	char *res;

	for (i = 0; *dest[i] != '\0'; i++)
	{
		count_d++;
	}
	for (i = 0; *src[i] <= count; i++)
	{
		count_s++;
	}
	for (i = 0; i < (count_d + count_s); i++)
	{
		while (*dest[i] != '\0')
		{
			res[i] = dest;
		}
		while (*scr[i] != '\0')
		{
			res[i] = src; 
		}
	}

}
