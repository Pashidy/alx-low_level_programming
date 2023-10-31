#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);

/**
 * read_textfile - Reads a text file and prints it to the POSIX std output
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	return (0);

	file = fopen(filename, "r");
	if (file == NULL)
	return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, 1, letters, file);

	if (bytesRead == 0 && !feof(file))
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytesRead] = '\0';
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	fclose(file);

	if ((size_t)bytesWritten != bytesRead)
	return (0);

	return (bytesRead);
}
