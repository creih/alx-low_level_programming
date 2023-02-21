#include <stdio.h>
/**
 * main - calling function
 * to printing _putchar
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	char name[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');
	return (0);
}
