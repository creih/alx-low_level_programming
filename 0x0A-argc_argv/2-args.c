#include <stdio.h>
/**
 * main - function
 * @argc: size of argv
 * @argv: will store input string
 * Return: 0 upon success
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
