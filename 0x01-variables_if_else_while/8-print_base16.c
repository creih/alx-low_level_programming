#include <stdio.h>
/**
 * main -printing numbers in 16 base
 * Return: (0) will have succeeded
 */
int main(void)
{
	int base_16;

	for (base_16 = 0; base_16 < 16; base_16++)
	{
		if (base_16 >= 10)
		{
			putchar(97+(base_16 % 10));
		}
		else
		{
			putchar(48 + (base_16 % 10));
		}
	}
	putchar('\n')
	return (0);
}
