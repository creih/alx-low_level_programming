#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - sqrt of the number
 * @n: nbr passed
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int mid, high = n, low = 0;

	if (high >= low)
	{
		mid = (high + low) / 2;
		if ((mid * mid <= n) && ((mid + 1)+ (mid + 1) > n))
		{
			return mid;
		}
		else if (mid * mid < n)
		{
			return (_sqrt_recursion(mid + 1));
		}
		else
		{
			return (_sqrt_recursion(mid - 1));
		}
	}
	return -1;
}
