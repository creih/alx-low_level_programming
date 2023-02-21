#include <stdio.h>
/**
 * main - will show fib
 * Return: 0if true
 */
int main(void)
{
	long long c = 0, count = 0, a = 1, b = 2;

	printf("%lld, %lld", a, b);
	while (count < 98)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
		count++;
	}
	return (0);
}
