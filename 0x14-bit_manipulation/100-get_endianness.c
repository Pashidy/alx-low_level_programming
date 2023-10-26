#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * This function determines whether the system is big endian or little endian.
 *
 * Return: 0 if the system is big endian, 1 if the system is little endian.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *ch = (char *)&test;

/*
 * If the least significant byte is at the lowest address,
 * the system is little endian. Otherwise, it is big endian.
 */
	return ((int)*ch);
}
