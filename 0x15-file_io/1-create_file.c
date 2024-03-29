#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes, close_status;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close_status = close(fd);
	if (close_status == -1)
	return (-1);

	return (1);
}
