#include "main.h"

/**
 * puts2 - prt other char
 * @str: str
**/

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (!(*str))
			break;
		str++;
	}

	_putchar('\n');
}
