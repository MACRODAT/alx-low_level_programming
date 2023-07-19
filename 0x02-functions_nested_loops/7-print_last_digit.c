#include "main.h"

/**
 * print_last_digit - main fct
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	{
		r *= -1;
	}
	_putchar('0' + r);
	return (r);
}
