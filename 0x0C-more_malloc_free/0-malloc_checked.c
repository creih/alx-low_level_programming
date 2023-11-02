#include<stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: this is the variable we'll create memory for
 * Return: 98 on fail, else pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	char *point = malloc(b);

	if (point)
	{
		return (point);
	}
	else
	{
		exit(98);
	}

}
