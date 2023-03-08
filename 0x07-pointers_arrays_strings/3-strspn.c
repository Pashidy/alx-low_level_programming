#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of @s which
 * consists entirely of characters from @accept
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of @s that consist
 * only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}

	return (count);
}

