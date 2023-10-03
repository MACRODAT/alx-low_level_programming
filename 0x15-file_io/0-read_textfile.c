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
	if (!filename || letters)
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	read_ = read(fd, b, letters);
	wrote = write(fd, b, read_);
	if (wrote != read_)
		return (0);
	return (read_);
}
