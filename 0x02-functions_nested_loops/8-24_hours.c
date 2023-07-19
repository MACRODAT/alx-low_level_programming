#include "main.h"

/**
 * jack_bauer - main fct
 * Return: last digit
 */

void jack_bauer(void)
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			for (int a = 0; a < 6; a++)
			{
				for (int b = 0; b < 10; b++)
				{
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
