#include "main.h"
/**
 * factorial - find fact of n
 * @n: parameter of nbr
 * Return: fact result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
