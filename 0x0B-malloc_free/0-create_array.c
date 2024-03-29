#include <stdlib.h>
#include "main.h"

/**
 * create_array - Allocates memory for an array and initializes it with a char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the allocated memory for the array,
 *         or NULL if size is 0 or if malloc fails.
 */
char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *array;


	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
