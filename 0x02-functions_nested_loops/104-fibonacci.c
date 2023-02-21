#include <stdio.h>
/**
 * main - will show fib
 * Return: 0if true
 */
int main(void)
{
	int c = 0, a = 1, b = 2;
	
	printf("%d, %d, ", a,b);
	while(c <= 98)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;
	}
	return (0);
}
