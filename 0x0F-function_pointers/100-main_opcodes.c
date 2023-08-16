#include <stdio.h>
#include <stdlib.h>

/**
 * main - number_of_bytes
 * @argc: args
 * @argv: ar
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;
	int i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		return (2);
	}
	// the genius line - not my idea hh
	arr = (char *)main;
	for (i = 0; i < b - 1; i++)
	{
		printf("%02hhx ", arr[i]);
	}
	printf("%02hhx\n", arr[i]);
	return (0);
}
