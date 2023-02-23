#include "main.h"
/**
 * _isupper - check if is upcase
 * @c: checked variable
 * Return: 1 if true, 0 else
 */
int _isupper(int c)
{
	if (c >= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
