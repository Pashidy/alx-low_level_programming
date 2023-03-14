#include <stddef.h>

#include <stddef.h>

/**
 * _memset - Fill a block of memory with a specific value.
 * @s: A pointer to the block of memory to fill.
 * @c: The value to fill the block of memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory block.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;

	while (n--)
		*p++ = (unsigned char) c;

	return (s);
}
