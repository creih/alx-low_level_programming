#include "main.h"
/**
 * 2-print_alphabet_x10 - print alph 10tymz
 * Return: no return variable
 */
void print_alphabet_x10(void)
{
	char alphab;
	int tymz = 0;

	while (tymz < 10)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)
		{
			_putchar(alphab);
		}
		_putchar('\n');
	}
}
