#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte,
 * to the buffer pointed to by dest
 *
 * @dest: buffer to copy to
 * @src: buffer to copy from
 *
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (temp);
}
