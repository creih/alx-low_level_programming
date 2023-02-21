#include <stdio.h>
/**
 * main -print sum fibonacci
 * Return: 0 if true
 */
int main(void)
{
	long long sum = 0, a = 1, b = 2, c = 0;

	sum = a + b + c;
	while (c < 4000000)
	{
		c = a + b;
		if (sum > 0)
		{
			sum = sum + c;
			a = b;
			b = c;
		}
		sum = sum + c;
		a = b;
		b = c;
	}
	printf("%lld\n", sum);
	return (0);
}
