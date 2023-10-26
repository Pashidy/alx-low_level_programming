#include <stdlib.h>

/**
 * is_space - Checks if a character is a space
 * @c: The character to check
 *
 * Return: 1 if c is a space, 0 otherwise
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int word_count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
			word_count++;
	}

	return (word_count);
}

/**
 * allocate_words - Allocates memory for an array of words
 * @word_count: The number of words
 *
 * Return: Pointer to the allocated memory
 */
char **allocate_words(int word_count)
{
	return ((char **)malloc((word_count + 1) * sizeof(char *)));
}

/**
 * extract_words - Extracts words from the input string
 * @str: The input string
 * @words: The array to store the words
 *
 * Return: Success or failure
 */
int extract_words(char *str, char **words)
{
	int i, j, word_start = 0, word_index = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
		{	word_start = i;

		if (!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
		{
			int word_length = i - word_start + 1;

			words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));

			if (words[word_index] == NULL)
			{
			for (j = 0; j < word_index; j++)
				free(words[j]);
			free(words);
			return (-1);
			}
			for (j = 0; j < word_length; j++)
			words[word_index][j] = str[word_start + j];
			words[word_index][j] = '\0';
			word_index++;
		}
		}

	words[word_index] = NULL;

	return (0);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words)
 *         NULL if str is NULL or str is empty
 */
char **strtow(char *str)
{
	int word_count = count_words(str);
	char **words = allocate_words(word_count);

	if (str == NULL || *str == '\0')
		return (NULL);

	if (word_count == 0)
		return (NULL);

	if (words == NULL)
		return (NULL);

	if (extract_words(str, words) == -1)
	{
		free(words);
		return (NULL);
	}

	return (words);
}
