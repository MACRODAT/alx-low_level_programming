#include <stdio.h>
#include "main.h"

/**
 * main - prg name
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	int i = strtol(argv[1], NULL, 10);
	int j = strtol(argv[2], NULL, 10);

	printf("%d\n", i * j);

	return (0);
}
