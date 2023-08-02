#include "main.h"

/**
 * _puts_recursion - prints
 * @s: char
*/
void _puts_recursion(char *s)
{
	if (!*s)
		return;
	_putchar(*s);
	_puts_recursion(++s);
}
