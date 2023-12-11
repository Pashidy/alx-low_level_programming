#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
