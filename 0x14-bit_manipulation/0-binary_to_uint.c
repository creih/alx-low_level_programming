#include "main.h"
/**
 * binary_to_uint - chnges binary number to a int
 * @b: pointer to number
 * Return: that number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bara = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		bara = (bara << 1) + (*b - '0');
		b++;
	}
	return (bara);
}
