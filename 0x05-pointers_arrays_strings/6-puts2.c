#include "main.h"
#include <string.h>
/**
 * puts2 -prints 2nd chars
 * @str: parameter to use
 * Return: none
 */
void puts2(char *str)
{
	int index;

	for (index = 0; index < strlen(str); index += 2)
	{
		_putchar(*str);
		str += index;

	}
}
