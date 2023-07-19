#include "main.h"

/** p_3 - for 1000
 * @n: num
 * Return: 0
 */

void p_3(int n)
{
	if (n < 1000)
	{
		_putchar(' ');
	}
	else
	{
		_putchar('0' + (n / 1000));
	}
}


/** p_2 - for 100
 * @n: num
 * Return: 0
 */

void p_2(int n)
{
	if (n < 100)
	{
		_putchar(' ');
	}
	else
	{
		_putchar('0' + (n / 100));
	}
}

/** p_1 - for 10s
 * @n: num
 * Return: 0
 */

void p_1(int n)
{
	if (n < 10)
	{
		_putchar(' ');
	}
	else
	{
		int a = n / 10;
		if (a > 9)
		{
			_putchar('0' + (a % 10));
		}
		else
		{
			_putchar('0' + a);
		}
	}
}

/** p_0 - for 1s
 * @n: num
 * Return: 0
 */

void p_0(int n)
{
	int a = n % 10;
	if (a == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('0' + a);
	}
}

/**
 * print_times_table - pr
 * @n : value
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			int s = a * b;

			_putchar(',');
			p_3(s);
			p_2(s);
			p_1(s);
			p_0(s);
		}
		_putchar('\n');
	}
}
