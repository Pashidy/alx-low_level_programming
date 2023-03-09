#include "main.h"

/**
 * is_prime_number - checks if a given number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 3;

	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	if (n % 2 == 0)
	{
		return (0);
	}

	while (i * i <= n)
	{
	if (n % i == 0)
	{
		return (0);
	}

	i += 2;
	}

	return (1);
}

