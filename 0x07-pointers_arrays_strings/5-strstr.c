#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	return (haystack);

	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

	while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
	{
		haystack_ptr++;
			needle_ptr++;
	}

		if (*needle_ptr == '\0')
		return (haystack);

			haystack++;
	}

	return (NULL);
}

