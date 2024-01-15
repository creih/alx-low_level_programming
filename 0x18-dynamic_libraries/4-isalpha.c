#include "main.h"
/**
 * _isalpha - identify alphabets
 * @c: parrameter to specify entered ascii
 * Return: (1) if is letter or (0) if not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
