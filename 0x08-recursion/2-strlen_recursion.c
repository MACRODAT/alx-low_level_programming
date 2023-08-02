#include "main.h"

/**
 * _strlen_recursion - prints
 * @s: char
 * Return: an int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0' || *s == 0)
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
