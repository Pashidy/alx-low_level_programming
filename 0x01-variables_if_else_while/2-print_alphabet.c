#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char li;

	for (li = 'a'; li <= 'z'; li++)
	{
		putchar(li);
	}
	putchar('\n');
	return (0);
}
