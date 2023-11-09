#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: goes between the strings
 * @n: nbr of strings
 * Return: string or NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *x;
	va_list strings;

	va_start(strings, n);
	while (i < n)
	{
		x = va_arg(strings, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
