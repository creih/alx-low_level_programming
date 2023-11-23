#include "main.h"
/**
 * set_bit - sets a bit to 1 of index
 * @n: actual nbr 
 * @index: index to set
 * Return: 1 success -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 9)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
