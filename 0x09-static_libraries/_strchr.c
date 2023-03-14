#include <stddef.h>

/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)

		return ((char *) s);

		s++;
	}

	if (*s == c)

	return ((char *) s);

	return (NULL);
}
