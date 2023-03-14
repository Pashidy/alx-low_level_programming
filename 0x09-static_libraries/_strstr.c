#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (!haystack || !needle)
	return (NULL);

	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;

	while (*p1 && *p2 && (*p1 == *p2))
	{
		p1++;
		p2++;
	}

	if (!*p2)
	return (haystack);

		haystack++;
	}

	return (NULL);
	}
