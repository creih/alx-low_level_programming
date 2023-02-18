#include <stdio.h>
/*end of headers*/
/**
 * main -function will be here
 * and we'll display alpabets
 * Return: (0) if successful
 */
int main(void)
{
	int alphabets;

	/*for to loop through all alphabets*/
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
