#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: number to compute absolute value of
 *
 * Return: absolute value of n.
 */

int _abs(int n)
{
	return (n < 0 ? -n : n);
}
