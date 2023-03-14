#include <stddef.h>
#include <string.h>

/**
 * _strspn - Get the length of the initial segment of a string that consists
 *           entirely of characters contained in another string.
 * @s: The string to search.
 * @accept: The string containing the characters to search for.
 *
 * Return: The length of the initial segment of s that consists entirely of
 *         characters in accept.
 */
size_t _strspn(const char *s, const char *accept)
{
	size_t len = 0;

	while (*s != '\0' && strchr(accept, *s++) != NULL)
		len++;

	return (len);
}
