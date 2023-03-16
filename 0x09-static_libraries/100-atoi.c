#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to convert
 *
 * Return: integer value of s.
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s != '\0')
	{
		if (_isdigit(*s))
		{
			num = num * 10 + (*s - '0');
		}
	else
	{
		break;
	}
	s++;
	}

	return (num * sign);
}
