#include "main.h"
/**
 * clear_bit - set value at index to 0
 * @n: nbr
 * @index: index to change at
 * Return: 1 if right else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
