#include <stdio.h>
#include <math.h>

/**
 * main - lrgst prm
 * Return: 0
 */
int main(void)
{
	long int x, y;

	x = 612852475143;

	for (y = 2; x > y; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
