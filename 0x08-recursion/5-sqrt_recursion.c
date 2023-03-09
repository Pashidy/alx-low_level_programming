#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number using recursion
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int root = _sqrt_recursion(n / 4) * 2;

	if (n < 0)
	return -1;

	if (n == 0 || n == 1)
	return n;

	if (root * root <= n && (root + 1) * (root + 1) > n)
	return root;
	else
	return -1;
}
