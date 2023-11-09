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
	unsigned int i = 0;
	int digit;
	va_list ints;

	va_start(ints, n);
	if (n == 0)
	{
		printf("\n");
		va_end(ints);
		return;
	}
	while (i < n)
	{
		digit = va_arg(ints, int);
		printf("%d", digit);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ints);
}
