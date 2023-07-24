#include "main.h"
#include "string.h"

/**
 * puts_half - Prt
 * @str: str
**/

void puts_half(char *str)
{
	int i, len = strlen(str);

	if (len % 2 != 0)
	{
		len = len / 2 + 1;
	}
	else
	{
		len /= 2;
	}

	str = str + len;
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
