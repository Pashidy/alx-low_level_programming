#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * containing values from min to max
 *
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: a pointer to the newly created array,
 * or NULL if an error occurred
 */

int *array_range(int min, int max)
{
	int *arr;
	int len, i;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	arr[i] = min + i;

	return (arr);
}

