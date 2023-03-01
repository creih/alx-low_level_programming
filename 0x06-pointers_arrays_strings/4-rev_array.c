#include  "main.h"
/**
 * reverse_array - reverses int array
 * @a:  og array
 * @b: reversed array
 * @n: size of arrays
 * Return: nothing
 */
void reverse_array(int *a, int *b, int n)
{
	int size, i;

	n = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		size++;
	}
	for (n = size; n > 0; n++)
	{
		b[n] = *a;
		a++;
	}
}
