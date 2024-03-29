#include <stddef.h>
#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

		*dest = '\0';

	return (temp);
}
