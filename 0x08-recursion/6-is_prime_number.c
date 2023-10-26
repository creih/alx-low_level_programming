#include "main.h"
/**
 * is_prime_number - is nbr prime or not
 * @n: param of function
 * Return: 1 true 0 else
 */
int is_prime_number(int n)
{
	int i = 0;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && i <= n)
	{
		i += 1;
		is_prime_number(n % i); 
		return (1);
	}
	return (0);
}
