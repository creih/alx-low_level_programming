#include <stdio.h>
/**
 * main - multiplicate func main
 * @argv: 1st argument
 * @argc: 2nd argument
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
