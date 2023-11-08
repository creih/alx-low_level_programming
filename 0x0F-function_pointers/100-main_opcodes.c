#include <stdio.h>
#include <stdlib.h>
/**
 * main - main of the whole thing
 * @argc: args nbr
 * @argv: args
 * Return: 2 or 0
 *
 */
int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s number_of_bytes\n", argv[0]);
		return 1;
	}
	if (num_bytes < 0)
	{
		fprintf(stderr, "Error: Number of bytes cannot be negative.\n");
		return (2);
	}
	return (0);
}
