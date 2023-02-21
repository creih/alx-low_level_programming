#include <stdio.h>
/**
 * main - will show fib
 * Return: 0if true
 */
int main(void)
{
	long c = 0, count = 0, a = 1, b = 2;

	printf("%ld, %ld", a, b);
	while (count < 98)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
