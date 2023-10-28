#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int cents, num_coins, count;
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < num_coins)
	{
		if (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", count);
	return (0);
}

