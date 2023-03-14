#include <stddef.h>
#include <string.h>
#include "main.h"

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
	const char *p;
	size_t count = 0;
	int matches;

	while (*s)
	{
		p = accept;
		matches = 0;

	while (*p)
	{
		if (*p == *s)
		{
			matches = 1;
			count++;
		break;
		}

		p++;
	}

	if (matches == 0)
		break;

	s++;
	}

	return (count);
}
