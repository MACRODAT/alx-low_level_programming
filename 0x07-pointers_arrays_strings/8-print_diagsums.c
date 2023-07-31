#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + (size * i) + i);
		sum2 += *(a + (size * i) + size - i - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
