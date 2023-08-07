#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: int
 * @c: char
 *
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
	{
		return NULL;
	}
	arr = malloc(size * sizeof(char));
	if (!arr)
	{
		return NULL;
	}

	while (i < size - 1)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';

	return (arr);
}
