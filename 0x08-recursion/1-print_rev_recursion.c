#include "main.h"

/**
 * _print_rev_recursion - prints
 * @s: char
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0' || *s == 0)
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
