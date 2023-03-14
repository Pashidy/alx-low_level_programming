#include <stddef.h>

/**
 * _strncat - Concatenate two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate.
 *
 * Return: A pointer to the destination string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	char *ptr = dest;

	while (*ptr)
	ptr++;

	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
