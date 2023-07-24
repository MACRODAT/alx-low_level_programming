#include "main.h"

/**
 * _puts - ret
 * @str: param1
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}