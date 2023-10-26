#include "main.h"
/**
 * is_prime_number - is nbr prime or not
 * @n: param of function
 * Return: 1 true 0 else
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else
	{
		return (n / is_prime_number(n - 1));
	}
	return (0);
}
