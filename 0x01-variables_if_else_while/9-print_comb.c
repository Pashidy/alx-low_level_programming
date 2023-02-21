#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int p = 0, q = 9;

	while (p <= q)
	{
		putchar(p + '0');

		if (p != q)
		{
			putchar(',');
			putchar(' ');
		}
		p++;
	}
	putchar('\n');

	return (0);
}
