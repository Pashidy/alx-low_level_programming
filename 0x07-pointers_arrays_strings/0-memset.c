#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with
 * the constant byte b.
 * @s: Pointer to the memory area to be filled.
 * @b: Constant byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
