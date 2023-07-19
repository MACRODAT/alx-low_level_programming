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
		for (j = 0; j < 10; ++j)
		{
			int s = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			a = s / 10;
			b = s % 10;
			if (i == 0)
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar('0');
				continue;
			}
			else if (a == 0)
			{
				if (b > 0)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + a);
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}
