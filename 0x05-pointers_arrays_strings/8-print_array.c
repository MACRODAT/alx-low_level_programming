#include "main.h"
#include <stdio.h>

/**
 * print_array - prt
 *@a: arr
 *@n: n
**/

void print_array(int *a, int n)
{
	int i = 0;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	
	while (i < n - 1)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	printf("%d\n", *(a + i));
}
