#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);

		if (p != 57)
		{
			putchar(',');

			putchar(' ');
		}
	putchar('\n');

	return (0);
	}
}
