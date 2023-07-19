#include "main.h"

/**
 * jack_bauer - main fct
 * Return: last digit
 */

void jack_bauer(void)
{
	int i, j, a, b;

	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			for (a = 0; a < 6; a++)
			{
				for (b = 0; b < 10; b++)
				{
					if (i == 2 && j == 4)
					{
						return;
					}
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar('\n');
				}
			}
		}
	}
}
