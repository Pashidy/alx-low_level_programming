#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: the byte to fill the memory area with
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
		*(p + i) = b;

	return (s);
}
