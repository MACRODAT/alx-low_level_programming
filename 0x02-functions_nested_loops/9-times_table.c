#include "main.h"

/**
 * times_table - main fct
 * Return: last digit
 */

void times_table(void)
{
	int i, j, a, b;

	for (i = 0; i < 10; ++i)
	{
		for (j = 1; j < 10; ++j)
		{
			int s = i * j;

			_putchar(',');
			_putchar(' ');
			a = s / 10;
			b = s % 10;
			_putchar('0' + a);
			_putchar('0' + b);
		}
	}
}
