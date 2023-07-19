#include <stdio.h>

/**
 * main - prints 1024
 *
 * Return: void
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float rst;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			rst += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", rst);
	return (0);
}
