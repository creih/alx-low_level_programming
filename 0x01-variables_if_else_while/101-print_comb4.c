#include <stdio.h>
/**
 * main -will b where we define 3 digit combination
 * Return: will be zero if true
 */
int main(void)
{
	int digit_0, digit_1, digit_2;

	for (digit_0 = 0; digit_0 < 10; digit_0++)
	{
		for (digit_1 = digit_0 + 1; digit_1 < 10; digit_1++)
		{
			for (digit_2 = digit_1 + 1; digit_2 < 10; digit_2++)
			{
				putchar((digit_0 % 10) + 48);
				putchar(48 + (digit_1 % 10));
				putchar((digit_2 % 10) + 48);
				if (digit_0 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
