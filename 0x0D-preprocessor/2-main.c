#include <stdio.h>

/**
 * main - prints the nam of the file from which the program was compiled.
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

