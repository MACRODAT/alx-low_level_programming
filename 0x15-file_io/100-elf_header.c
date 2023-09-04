#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * close_e - Closer
 * @elf: f
 *
 * Description: if not
 */
void close_e(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}


/**
 * _magic - MAGIC
 * @e_ident: PTR
 *
 * Description: ERR
 */
void _magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i != EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Write a program that displays the information 
 * 		contained in the ELF header at the start of an ELF file.
 * @argc: The number
 * @argv: An arrr
 *
 * Return: 0 on success.
 *
 * Description: If t
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int o, r;
	Elf64_Ehdr *h;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_e(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	r = read(o, h, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(h);
		close_e(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:\n");
	_magic(h->e_ident);
	return (0);
}
