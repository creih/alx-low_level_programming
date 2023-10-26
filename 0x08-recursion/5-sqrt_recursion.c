#include "main.h"
#include <math.h>
/**
 * _sqrt_recursive - sqrt of the number
 * @n: nbr passed
 * @low: the least
 * @high: the upper
 * Return: square root of n
 */
#include <stdio.h>

int _sqrt_recursive(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int mid_square = mid * mid;

	if (low > high)
	{
		return (-1);
	}
	if (mid_square == n)
	{
		return (mid);
	}
	else if (mid_square > n)
	{
		return (_sqrt_recursive(n, low, mid - 1));
	}
	else
	{
		return (_sqrt_recursive(n, mid + 1, high));
	}
}
/**
 * _sqrt_recursion - calls the upper defined function
 * @n: the number i'd be using
 * Return: some nbr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_recursive(n, 0, n));
}
