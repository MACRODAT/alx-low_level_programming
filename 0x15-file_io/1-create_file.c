#include "main.h"

/**
 * create_file - reads a text file
 * @filename: file name
 * @text_content: size
 * Return: nothing
*/
int create_file(const char *filename, char *text_content)
{
	int _len = 0, n_write = 0, n_read = 0;

	if (!filename)
		return (-1);

	n_read = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (n_read < 0)
		return (-1);
	if (!text_content)
	{
		while (text_content[_len])
			_len++;
		n_write = write(n_read, text_content, _len);
		if (n_write < 0 || n_read != n_write)
			return (-1);
	}
	
	close(n_read);

	return (1);
}
