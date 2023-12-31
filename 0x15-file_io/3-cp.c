#include "main.h"

/**
 * main - copies
 * @argc: number of arguments
 * @argv: arr of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	int read_state, close_state1, close_state2;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_state = read(fd1, b, 1024)) > 0)
	{
		if (fd2 < 0 || write(fd2, b, read_state) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd2);
			exit(99);
		}
	}
	if (read_state < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_state1 = close(fd1);
	close_state2 = close(fd2);
	if (close_state1 < 0 || close_state2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(close_state1 < 0) ? fd1 : fd2);
		exit(100);
	}
	return (0);
}
