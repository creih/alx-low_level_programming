#include <stdio.h>
/**
 * main - similar to printing all numbers till certain limit
 * Return: (0) will show success
 */
int main(void)
{
	int combine;

	for (combine = 0; combine < 10; combine++)
	{
		putchar((combine % 10) + 48);
		if (combine < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
