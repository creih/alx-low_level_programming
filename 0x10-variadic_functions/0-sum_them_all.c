#include <stdarg.h>
/**
 * sum_them_all - adds all parameters passed
 * @n: is first argument of function
 * Return: 0 or otherwise the sum of arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, i = 0, sum = 0;
	va_list num;

	if (n == 0)
	{
		return (0);
	}
	va_start(num, n);
	while (i < n)
	{
		x = va_arg(num, int);
		sum += x;
		i++;
	}
	va_end(num);
	return (sum);
}
