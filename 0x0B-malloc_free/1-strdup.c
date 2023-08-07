#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @str: int
 *
 * Return: char
*/
char *_strdup(char *str)
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
