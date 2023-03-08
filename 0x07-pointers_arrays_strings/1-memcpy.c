#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p_dest++ = *p_src++;
	}

	return (dest);
}

