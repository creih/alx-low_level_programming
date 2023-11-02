#include <stdio.h>
#include <stdlib.h>
/**
 * mul - multiply 2 nbrs
 * @argc: nbr of arguments
 * argv: actual arguments vector
 * Return: idk yet
 */
void mul(int argc, char argv[])
{
	int res;

	if (argc == 3)
	{
		res = argv[1] * argv[2];
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
