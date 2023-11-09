#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print arg ints separted by separator
 * @separator: pointer to char to separate the ints displayed
 * @n: number of args
 * Return: ints or NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, digit;
	va_list ints;

	va_start(ints, n);
	if (separator == NULL)
	{
		return;
	}
	while (i < n)
	{
		if(i == n - 1)
		{
			printf("\n");
			return;
		}
		digit = va_arg(ints, int);
		printf("%d%s", digit, separator);
		i++;
	}
	va_end(ints);
}
