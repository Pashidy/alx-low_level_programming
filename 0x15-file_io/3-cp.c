#include<stdio.h>
#include<stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */

int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	size_t bytes_read, bytes_written;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = fopen(argv[1], "r");
	file_to = fopen(argv[2], "w");

	if (!file_from || !file_to)
	{
		fprintf(stderr, "Error: Can't open file\n");
		return (98);
	}

	while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, file_from)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, file_to);
		if (bytes_written != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			fclose(file_from);
			fclose(file_to);
			return (99);
		}
	}

	if (ferror(file_from))
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		fclose(file_from);
		fclose(file_to);
		return (98);
	}

	fclose(file_from);
	fclose(file_to);

	return (0);
}

