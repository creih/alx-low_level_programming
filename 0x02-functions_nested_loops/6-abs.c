#include "main.h"
/**
 * _abs - calculates absolute value
 * @num: parameterto be checked
 * Return: (0) if true
 */
int _abs(int num)
{
	if (num < 0)
	{
		num *= -1;
		return num;
	}
	else
	{
		return num;
	}
}
