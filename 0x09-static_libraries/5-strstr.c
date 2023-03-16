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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[i + j] != needle[j])
	break;
	}

	if (needle[j] == '\0')
		return (haystack + i);
	}

	return (NULL);
}
