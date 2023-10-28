#include <stdio.h>
/**
 * main - function
 * @argc: size of argv
 * @argv: will store input string
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	while (argc++)
	{
		printf("%d\n", argc);
		if (argc == '\0')
		{
			printf("\n");
		}
	}
	return (0);
}
