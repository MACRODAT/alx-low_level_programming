#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - looks for number
 * @array: number
 * @size: number
 * @value: value
 *
 * Return: int
*/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
