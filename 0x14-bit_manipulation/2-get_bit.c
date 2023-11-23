#include "main.h"
/**
 * get_bit - retrieve bit at some index
 * @n: is the number passed
 * @index: of retrieved value
 * Return: index for success, -1 for false
 */
int get_bit(unsigned long int n, unsigned  index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (n >> index) & 1;
}
