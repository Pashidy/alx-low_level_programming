#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @s: string to print
 */

void _puts(const char *s)
{
	while (*s)
	putchar(*s++);
	putchar('\n');
}
