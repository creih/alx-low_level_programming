#include "main.h"
#include <string.h>
/**
 * puts2 -prints 2nd chars
 * @str: parameter to use
 * Return: none
 */
void puts2(char *str)
{
	int index, count = 1;
	
	while(*str++)
	{
		count++;
	}
	for (index = 0; index < count; index += 2)
	{
		_putchar(*str);
		str += index;

	}
}
