#include "search_algos.h"

/**
 * recursive_search - searching using BCT
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t middle = size / 2;
	int i;

	if (!array || !size)
		return (-1);

	if (array[middle] == value)
		return ((int) middle);

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (array[middle] > value)
		return (recursive_search(array, middle, value));
	else
		return (recursive_search(array + middle + 1, size - middle, value));
}

/**
 * binary_search - BCT function
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
