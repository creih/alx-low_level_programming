#include <stdio.h>
/**
 * main function will be here
 * and we'll display alpabets
 * Return: will be (0) if successful
 */
int main(void)
{
	int alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
