#include <stdio.h>
/**
 * main -printing numbers in base 10
 * Return: (0) will mean it succeeded
 */
int main(void)
{
	int number;

	number=0;
	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	puts("\n");
	return (0);
}
