#include "main.h"
/**
 * _pow_recursion - powers x to y expo
 * @x: base
 * @y: exponent
 * Return: x raised to y
 */
int _pow_recursive(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y -1));
	}
}
