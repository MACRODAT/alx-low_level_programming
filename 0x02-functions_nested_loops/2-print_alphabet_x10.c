#include "main.h"

/**
 * print_alphabet_x10 - main fct
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int ind = 0;
	int i = 0;

	while (i < 10)
	{
	
		while (ind < 26)
		{
			_putchar('a' + ind);
			ind++;
		}
		++i;
		_putchar('\n');
	}
}

