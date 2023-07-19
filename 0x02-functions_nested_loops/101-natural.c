#include <stdio.h>

/**
 * pr - prints 1024
 *
 * Return: void
 */

void pr()
{
	int sum, a;

	for (a = 3; a < 1024; a=a+3)
	{
		if (a % 5 == 0)
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
}
