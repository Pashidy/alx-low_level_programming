#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search.
 * @accept: set of bytes to search for.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p_s, *p_accept;

	for (p_s = s; *p_s != '\0'; p_s++)
	{
		for (p_accept = accept; *p_accept != '\0'; p_accept++)
		{
			if (*p_s == *p_accept)
				return (p_s);
		}
	}

	return (NULL);
}

