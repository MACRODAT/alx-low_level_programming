#include "search_algos.h"
#include <math.h>

/**
 * jump_search - find a value
 *
 * @array: input
 * @size: size of the arr
 * @value: value
 * Return: index
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, m;

	m = (int) sqrt(size);

	for (i = 0; i < size; i += m)
	{
		if (array[i] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - m, i);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	while (i < size && array[i] > value)
	{
		i--;
		if (i < 0)
			return (-1);
	}
	if (array[i] == value)
		return (i);
	return (-1);
}
