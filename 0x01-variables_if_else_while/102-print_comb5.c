#include <stdio.h>
/**
 * main - will print 2 number combo
 * Return: (o) if True
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 100; first++)
	{
		for (second = 0; second < 100; second++)
		{
			printf("%02d %02d", first, second);
			if (first < 100 && second < 100)
			{
				printf(", ");
			}
			else
			{
				break;
			}
		}
	}
	return (0);
}
