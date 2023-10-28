#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplicate func main
 * @argv: array of args
 * @argc: size of argv
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
