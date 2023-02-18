#include <stdio.h>
/**
 * main -print all single digit
 * Return: will be zero if successful
 */
int main(void)
{
	int numberz;

	numberz = 0;
	while (numberz < 10)
	{
		putchar(48 + numberz);
		numberz++;
	}
	putchar('\n');
	return (0);
}
