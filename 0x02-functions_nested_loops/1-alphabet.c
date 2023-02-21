#include "_putchar.c"
/**
 * print-alpha - will print alphabets
 * Return: will have none
 */
void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
/**
 * main -will call print_alphabet()
 * Return: will be zero if true
 */
int main(void)
{
	print_alphabet();
	return (0);
}
