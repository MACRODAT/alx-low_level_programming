#include <stdio.h>

/**
 * main - prints 1024
 *
 * Return: void
 */

int main(void)
{
	int sum, a;

	for (a = 3; a < 1024; a = a + 1)
	{
		if (a % 5 == 0 || a % 3 == 0)
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
