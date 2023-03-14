#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to convert
 *
 * Return: integer value of s.
 */

int _atoi(const char *s)
{
	int sign = 1, num = 0;

	while (*s == ' ')
	s++;

	if (*s == '-' || *s == '+')
	sign = (*s++ == '-') ? -1 : 1;

	while (*s >= '0' && *s <= '9')
	num = num * 10 + (*s++ - '0');

	return (sign * num);
}
