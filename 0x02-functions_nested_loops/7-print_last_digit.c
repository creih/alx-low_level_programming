#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @digit: the source
 * Return: (digit) for true
 */
int print_last_digit(int digit)
{
	digit %= 10;
	_putchar(digit + '0');
	return (digit);
}
