#include "main.h"
/**
 * _atoi - convert char to int
 * @s: parameter we'll use
 * Return: num if true
 */
int _atoi(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num = num * 10 + (*s - 48); 
	}
	return num;
}
