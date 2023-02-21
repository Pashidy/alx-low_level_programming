#include <stdio.h>
/**
 * Main - prints lowercase
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alu;

	for (alu = 'a'; alu <= 'z'; alu++)

		putchar(alu);

	for (alu = 'A'; alu <= 'Z'; alu++)
		putchar(alu);

	putchar('\n');

	return (0);
}

