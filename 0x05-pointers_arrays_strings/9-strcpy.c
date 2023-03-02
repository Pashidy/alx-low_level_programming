#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to destination
 * @src: pointer to array
 * Return: dest (success)
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (dest);
}
