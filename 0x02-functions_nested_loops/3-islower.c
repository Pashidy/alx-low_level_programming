#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');

		_putchar('\n');
		return (1);
	}
	else
	{
		_putchar('0');

		putchar('\n');
		return (0);
	}
}
