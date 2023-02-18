#include <stdio.h>
/**
 * main - printing 2 digit combo
 * Return: (0 will show the success of our code)
 */
int main(void)
{
	int digit_0;
	int digit_1;

	for (digit_0 = 0; digit_0 < 10; digit_0++)
	{
		for (digit_1 = digit_0 + 1; digit_1 < 10; digit_1++)
		{
			putchar((digit_0 % 10) + 48);
			putchar(48 + (digit_1 % 10));
			if (digit_0 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
