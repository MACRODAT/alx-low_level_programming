#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file name
 * @text_content: size
 * Return: nothing
*/
int create_file(const char *filename, char *text_content)
{
	int _len = 0, n_write = 0, n_read = 0;
	char *b;

	if (!filename || !text_content)
		return (-1);
	while (text_content[_len])
		_len++;
	
	b = malloc(sizeof(char *) * _len);
	if (!b)
		return (-1);

	n_read = open(filename, O_CREAT);
	n_write = write(n_read, b, _len);

	if (n_read < 0 || n_write < 0)
		return (-1);
	
	return (1);
}
