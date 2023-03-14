#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strpbrk - Locate the first occurrence in a string
 *		of any character from a set of characters.
 * @s1: The string to search.
 * @s2: The set of characters to search for.
 *
 * Return: A pointer to the first occurrence of any character from
 *		s2 in s1,or NULL if no character from s2 is found.
 */
char *_strpbrk(const char *s1, const char *s2)
{
	const char *p = s2;

	while (*s1 != '\0')
	{
	while (*p != '\0')
	{
		if (*s1 == *p++)
		return ((char *) s1);
	}

	p = s2;
	s1++;
	}

	return (NULL);
}
