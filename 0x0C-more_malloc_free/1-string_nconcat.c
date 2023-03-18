#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to concatenate from s2
 *
 * Return: a pointer to a newly allocated space in memory containing s1
 *         followed by the first n bytes of s2, null terminated
 *         or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat = malloc(sizeof(char) * (s1_len + n + 1));
	if (concat == NULL)
		return (NULL);

	strncpy(concat, s1, s1_len);
	strncpy(concat + s1_len, s2, n);
	concat[s1_len + n] = '\0';

	return (concat);
}

