#include <stdio.h>
/**
 * print_alphabet - will print all alphabets
 * Return: will not be present due to void
 */
void print_alphabet(void);
/**
 * main - to call print_alphabet function in
 * Return: will be 0 upon success
 */
int main()
{
	print_alphabet();
	Return (0);
}
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
