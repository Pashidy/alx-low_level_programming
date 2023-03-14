#include <stddef.h>

/**
 * _memcpy - Copy a block of memory from source to destination.
 * @dest: A pointer to the destination memory block.
 * @src: A pointer to the source memory block.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory block.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;
	const unsigned char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}
