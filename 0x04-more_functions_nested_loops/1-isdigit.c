#include "main.h"
/**
 * _isdigit - will check if c is num
 * @c: will becheked
 * Return: (1)true, (0)otherwise
 */
int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}
	else if (c > 9)
	{
		return (0);
	}
}
