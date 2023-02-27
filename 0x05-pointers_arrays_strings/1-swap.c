#include "main.h"
/**
 * swap_int- will swap two numbers
 * @a: first param
 * @b: second param
 * Return: nothing as its void
 */
void swap_int(int *a, int *b)
{
	int *c;
	c = a;
	*a = b;
	*b = c;
}
