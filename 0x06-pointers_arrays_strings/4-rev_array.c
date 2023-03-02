#include  "main.h"
/**
 * reverse_array - rev int array
 * @a:  og array
 * @n: size of arrays
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int s, x = 0;

	for (s = 0; s < n / 2; s++)
	{
		x = a[s];
		a[s] = a[n - s - 1];
		a[n - s - 1] = x;
	}
}
