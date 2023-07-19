#include "main.h"

/**
 * main - main fct
 * Return: 0
 */

void print_alphabet(void)
{
	int ind = 0;

	while (ind < 26)
	{
		_putchar('a' + ind);
		ind++;
	}
	_putchar('\n');
	return (0);
}

