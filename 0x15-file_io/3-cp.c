#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Display an error message and exit with a specific code
 * @code: The error code
 * @message: The error message to display
 *
 * This function prints an error message to the standard error output (file
 * descriptor 2) and exits the program with the specified error code.
 */

void error_exit(int code, const char *message)
{
	dprintf(2, "Error: %s\n", message);
	exit(code);
}

/**
 * copy_file - Copy content from one file to another
 * @file_from: Source file name
 * @file_to: Destination file name
 *
 * This function copies the content of the source file to the destination file.
 * It reads data in chunks of BUFFER_SIZE (1024 bytes)
 * to minimize system calls.
 * If an error occurs during file operations,
 * it exits with the appropriate code.
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) == -1;
	if (fd_to == -1)
		error_exit(99, "Can't write to file");

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Can't write to file");
		if (bytes_written != bytes_read)
			error_exit(99, "Incomplete write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Can't close fd");
	if (close(fd_to) == -1)
		error_exit(100, "Can't close fd");
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * This function checks if the correct number of arguments is provided.
 * If not, it exits with code 97. It then calls copy_file with the provided
 * file names.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	copy_file(argv[1], argv[2]);

	return (0);
}
