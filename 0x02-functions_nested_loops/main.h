#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		_putchar(chars);
	}
}
