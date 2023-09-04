#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file name
 * @letters: size
 * Return: nothing
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char *) * letters);
	if (!buffer || !filename)
		return (0);

	fd = open(filename, O_RDONLY);
	n_read = read(fd, buffer, letters);
	n_write = write(1, buffer, n_read);

	if (fd == -1 || n_read < 0 || n_write < 0 || n_read != n_write)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n_write);
}
