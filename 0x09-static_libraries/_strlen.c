#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string to get length of
 *
 * Return: length of s.
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
	len++;

	return (len);
}
