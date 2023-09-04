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
 * is_elf - elf
 * @e_ident: ptr
 *
 * Description: not then error
 */
void is_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (	e_ident[i] != 127 && e_ident[i] != 'E' &&
		    	e_ident[i] != 'L' && e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _class - the class
 * @e_ident: ptr
 */
void _class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;

	case ELFCLASS64:
		printf("ELF64\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * _data - Pt the data
 * @e_ident: ptr
 */
void _data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
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
	is_elf(h->e_ident);
	printf("ELF Header:\n");
	_magic(h->e_ident);
	_class(h->e_ident);
	_data(h->e_ident);

	free(h);
	close_e(o);
	return (0);
}
