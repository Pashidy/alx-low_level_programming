#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @s: string to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}

	putchar('\n');
}
