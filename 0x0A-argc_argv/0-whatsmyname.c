#include "main.h"

/**
 * main - prg name
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *c = argv[0];

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
