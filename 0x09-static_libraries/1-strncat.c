#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenate two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate.
 *
 * Return: A pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (temp);
}
