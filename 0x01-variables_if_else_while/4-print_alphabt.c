#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char li;

	for (li = 'a'; li <= 'z'; li++)
	{
		if (li != 'e' && li != 'q')
			putchar(li);
	}
	putchar('\n');

	return (0);
}
