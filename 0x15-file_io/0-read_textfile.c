#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file name
 * @letters: size
 * Return: nothing
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_, wrote;
	char *b;

	if (!filename)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);
	fd = open(filename, O_RDONLY);
	read_ = read(fd, b, letters);
	wrote = write(STDOUT_FILENO, b, read_);
	close(fd);
	if (fd == -1 || read_ == -1 || wrote == -1 || wrote != read_)
	{
		free(b);
		return (0);
	}
	free(b);
	return (wrote);
}
