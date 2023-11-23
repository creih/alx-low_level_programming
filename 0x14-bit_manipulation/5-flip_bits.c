#include "main.h"
/**
 * flip_bits - nbr of bits to change to have similar nbrs
 * @n: nbr uno
 * @m: dos numero
 * Return: nbr of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bara = 0;
	unsigned long int xor_res = n ^ m;

	while (xor_res != 0)
	{
		bara += xor_res & 1;
		xor_res >>= 1;
	}
	return (bara);
}
