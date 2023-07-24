#include "String.h"

/**
 * print_rev - ret
 * @s: param1
*/
void print_rev(char *s)
{
	int l = strlen(s);
	int i = 0;

	for (i = l - 1; i > 0; i--)
	{
		_putchar(*(s + i));
	}
}