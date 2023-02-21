#include <stdio.h>
/**
 * main - natural divisible by 3, 5
 * Return: 0 for true
 */
int main(void)
{
	int num = 1, sum = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
