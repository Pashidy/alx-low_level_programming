#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout
 * @str: Pointer to the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}

	_putchar('\n');
}
