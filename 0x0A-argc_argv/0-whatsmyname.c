#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the name of the program, including the path,
 *              followed by a new line.
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the strings which
 * are those arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
