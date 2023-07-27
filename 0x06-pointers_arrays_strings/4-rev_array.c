#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 *
 */
void reverse_array(int *a, int n)
{
	int t;
	int i = 0;

	n--;
	while (i <= n / 2)
	{
		t = a[i];
		a[i] = a[n - i];
		a[n - i] = t;
		i++;
	}
}
