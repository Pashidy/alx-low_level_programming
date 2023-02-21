#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num;
	char li;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (li = 'a'; li <= 'f'; li++)
		putchar(li);

	putchar('\n');

	return (0);
}
