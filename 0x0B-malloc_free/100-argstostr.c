#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - Concatenate all arguments of the program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)

{
	int i, j;
	int total_length = 0;
	char *result = (char *)malloc((total_length + 1) * sizeof(char));
	int k = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		total_length++;
		total_length++;
	}

	if (result == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		result[k++] = av[i][j];
		result[k++] = '\n';
	}

	result[k] = '\0';

	return (result);
}
