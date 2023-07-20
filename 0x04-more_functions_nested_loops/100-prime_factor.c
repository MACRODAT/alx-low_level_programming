#include <stdio.h>
#include <math.h>

/**
 * main - lrgst prm
 * Return: 0
 */
int main(void)
{
	long long n;
	long long max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n >>= 2;
	}

	for (i = 5; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
