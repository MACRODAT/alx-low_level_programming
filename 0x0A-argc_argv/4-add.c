#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	for (i = 1; i < argc; i++)
	{
		char *s = argv[i];
		j += atoi(argv[i]);
		while (*s)
		{
			if (!isdigit(*s))
			{
				printf("Error\n");
				return (1);
			}
			s++;
		}
	}

	printf("%d\n", j);

	return (0);
}
