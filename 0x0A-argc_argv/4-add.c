#include <stdio.h>
#include <stdlib.h>
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
	int i, j;

	j = 0;
	for (i = 0; i < argc; i++)
	{
		j += atoi(argv[i]);
	}

	printf("%d\n", j);

	return (0);
}
