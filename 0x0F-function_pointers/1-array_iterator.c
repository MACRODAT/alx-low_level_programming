#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - fct
 * @array: arr
 * @size: sz
 * @action: ptr
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i++]);
	}
}
