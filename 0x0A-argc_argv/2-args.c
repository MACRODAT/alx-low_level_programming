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

	int i = argv[1];
	int j = argv[2];

	printf("%d\n", i * j);

	return (0);
}
