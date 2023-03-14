#include <stddef.h>
#include <stdlib.h>
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
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
	}

	if (accept[j] == '\0')
		return (count);
	}

	return (count);
}
