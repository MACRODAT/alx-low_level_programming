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
	long long i;

	n = 612852475143;
	//n = 101;
	max = -1;

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			//printf("%ld\n", max);
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
