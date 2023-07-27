#include "main.h"
/**
 * print_number - print
 * @n:input
 *
 *
 */
void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		_putchar('-');
		b = -b;
	}
	if (b / 10)
	{
		print_number(b / 10);
	}
	_putchar('0' + b % 10);
}
