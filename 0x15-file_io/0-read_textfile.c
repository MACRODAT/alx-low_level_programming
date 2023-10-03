#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file name
 * @letters: size
 * Return: nothing
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_, wrote;
	char *b;

	b = malloc(sizeof(char) * letters);
	if (!filename || b)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(b);
		return (0);
	}
	read_ = read(fd, b, letters);
	wrote = write(fd, b, read_);
	if (read_ < 0 ||  wrote != read_)
	{
		free(b);
		return (0);
	}
	return (read_);
}
