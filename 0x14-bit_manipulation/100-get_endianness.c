#include "main.h"
/**
 * get_indianness - for indians
 * Return: bat
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *bat = (char *) & num;

	return (*bat);
}
