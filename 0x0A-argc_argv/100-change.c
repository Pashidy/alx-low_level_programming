#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins needed to make change.
 * @argc: The number of arguments.
 * @argv: An array of string arguments.
 *
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char *argv[])
{
	int i;
	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
        int numCoins = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	for (i = 0; i < 5; i++)
	{
		numCoins += cents / coins[i];
		cents = cents % coins[i];
	}

	printf("%d\n", numCoins);

	return (0);
}

