#include <stdio.h>
#include <math.h>

/**
 * main - lrgst prm
 * Return: 0
 */
int main(void)
{
	long long n;
	long int div=2, ans = 0, maxFact;

    n = 612852475143;

    while (n != 0)
    {
        if (n % div != 0)
            div = div + 1;
        else
        {
            maxFact = n;
            n = n / div;
            if (n == 1) {
                printf("%ld",maxFact);
                ans = 1;
                break;
            }
        }
    }

	return (0);
}
