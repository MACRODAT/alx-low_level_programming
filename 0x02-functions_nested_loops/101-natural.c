#include <stdio.h>

/**
 * main - prints 1024
 *
 * Return: void
 */

int main()
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
	return (0);
}
