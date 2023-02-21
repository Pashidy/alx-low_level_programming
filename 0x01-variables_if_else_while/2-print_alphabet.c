#include <stdio.h>
/**
 * main - main prints lower case alphabets
 *
 * return: 0 (success)
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
