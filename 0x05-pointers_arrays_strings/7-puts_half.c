#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	n = len / 2;
	if (len % 2 != 0)
	{
		n += 1;
	}

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
