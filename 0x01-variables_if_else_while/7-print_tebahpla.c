#include <stdio.h>
/**
 * main -print alphabet in reverse
 * Return: (0) will mean success
 */
int main(void)
{
	char word;

	for (word = 'z'; word >= 'a'; word--)
	{
		putchar(word);
	}
	putchar('\n');
	return (0);
}
