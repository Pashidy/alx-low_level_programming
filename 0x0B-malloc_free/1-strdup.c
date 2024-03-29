#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated memory
 *		containing the duplicated string,
 *         or NULL if str is NULL or if malloc fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len = 0, i;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	{
		len++;

	}
		dup_str = malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
